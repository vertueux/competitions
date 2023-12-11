#include <iostream>
using namespace std;

int suite(int terme) {
  if (terme % 2 == 0) 
    return (terme / 2);
  else 
    return (terme * 3 + 1);
}
int main() {
  int terme;
  cin >> terme;
  int val_affiche = terme;
  while (val_affiche != 1) {
    val_affiche = suite(val_affiche);
    cout << val_affiche << " ";
  }
}
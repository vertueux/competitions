#include <iostream>
using namespace std;

int main() {
  int entree = 0, somme_tot = 0;
  while (entree != -1) {
    somme_tot += entree;
    cin >> entree;
  }
  cout << somme_tot << endl;
}
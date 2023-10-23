#include <iostream>
#include <string>
using namespace std;

int main() {
  string nom1, nom2;
  cin >> nom1 >> nom2;
  if (nom1 != nom2) {
    if (nom1 < nom2) 
      cout << nom1 << endl;
    else if (nom2 < nom1) 
      cout << nom2 << endl;
  }
}
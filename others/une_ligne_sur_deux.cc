#include <iostream>
using namespace std;

int main() {
  int nbLignes;
  string lignes;
  cin >> nbLignes;
  cin.ignore();
  for (int i = 1; i <= nbLignes; i++) {
    getline(cin, lignes);
    if ((i % 2) == 1) 
      cout << lignes << endl;
  }
}
#include <iostream>
using namespace std;

int main() {
  int nbLignes;
  cin >> nbLignes;
  cin.ignore();
  for (int i = 0; i < nbLignes; i++) {
    string texte_inv;
    getline(cin, texte_inv);
    for (int j = (int)texte_inv.length() - 1; j >= 0; j--) {
      cout << texte_inv[j];
    }
    cout << endl;
  }
}
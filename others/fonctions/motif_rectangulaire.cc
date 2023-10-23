#include <iostream>
using namespace std;

void afficher_feuille(int lignes, int colonnes, char motif) {
  for (int i = 0; i < lignes; i++) {
    for (int j = 0; j < colonnes; j++) {
      cout << motif;
    }
    cout << endl; 
  }
}

int main() {
  int lignes, colonnes;
  char motif;
  cin >> lignes >> colonnes >> motif;
  afficher_feuille(lignes, colonnes, motif);
}
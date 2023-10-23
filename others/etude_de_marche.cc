#include <iostream>
using namespace std;

int main() {
  int nb_produits, nb_personnes, numero;
  cin >> nb_produits >> nb_personnes;
  int sondage[nb_produits] = {0}; 
  for(int i = 0; i < nb_personnes; i++) {
    cin >> numero;
    sondage[numero] += 1;
  }
  for (int i = 0; i < nb_produits; i++) {
    cout << sondage[i] << endl;
  }
}
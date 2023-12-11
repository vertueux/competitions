#include <iostream>
using namespace std;

int main() {
  int nb_a_trouver, nb_de_lenfant = 0, nb_essaies = 0;
  cin >> nb_a_trouver;
  while (nb_de_lenfant != nb_a_trouver) {
    cin >> nb_de_lenfant;
    if (nb_de_lenfant > nb_a_trouver) cout << "c'est moins" << endl;
    else if (nb_de_lenfant < nb_a_trouver) cout << "c'est plus" << endl; 
    nb_essaies++;
  }
  cout << "Nombre d'essais nécessaires :" << endl;
  cout << nb_essaies << endl;
}
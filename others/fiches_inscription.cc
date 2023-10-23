#include <iostream>
using namespace std;

int main() {
  int nbPersonnes;
  string prenom, nom;
  cin >> nbPersonnes;
  for (int i = 0; i < nbPersonnes; i++) {
    cin >> prenom >> nom;
    cout << nom << " " << prenom << endl;
  }
}
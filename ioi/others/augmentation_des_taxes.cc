#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double valeur_taxe, nouvelle_taxe, prix_actuel;
  cin >> valeur_taxe >> nouvelle_taxe >> prix_actuel;
  if (valeur_taxe == nouvelle_taxe) 
    cout << prix_actuel << endl;
  else {
    valeur_taxe /= 100;
    nouvelle_taxe /= 100;
    prix_actuel = round(((prix_actuel / (1 + valeur_taxe) * (1 + nouvelle_taxe))) * 100) / 100;
    cout << prix_actuel << endl;
  }
}
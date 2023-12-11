#include <iostream>
using namespace std;

int main() {
  int somme_argent, prix_livre, total_acheter;
  cin >> somme_argent >> prix_livre;
  total_acheter = static_cast<int>(somme_argent / prix_livre);
  cout << total_acheter << endl;
}
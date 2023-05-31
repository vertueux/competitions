#include <iostream>
using namespace std;

int main() {
  int nbCharrettes;
  cin >> nbCharrettes;
  double lst_rslt[nbCharrettes] = {0};
  double moyenne = 0;
  if (!(nbCharrettes <= 3000)) return 0;
  for (int i = 0; i < nbCharrettes; i++) {
    double poids;
    cin >> poids;
    lst_rslt[i] = poids;
    moyenne += poids;
  }
  moyenne /= nbCharrettes;
  for (int i = 0; i < nbCharrettes; i++) {
    lst_rslt[i] = moyenne - lst_rslt[i];
    cout << lst_rslt[i] << endl;
  }
}
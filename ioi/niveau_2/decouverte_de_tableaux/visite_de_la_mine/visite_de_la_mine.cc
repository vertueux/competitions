#include <iostream>
using namespace std;

int main() {
  int nbTotalDeplacements, depl_actuel;
  cin >> nbTotalDeplacements;
  if (nbTotalDeplacements > 1000) return 0;
  int depl_actuels[nbTotalDeplacements] = {0};
   
  for(int i = 0; i < nbTotalDeplacements; i++){
    cin >> depl_actuel;
    switch(depl_actuel) {
      case 1 : depl_actuel = 2; break;
      case 2 : depl_actuel = 1; break;
      case 3 : depl_actuel = 3; break;
      case 4 : depl_actuel = 5; break;
      case 5 : depl_actuel = 4; break;
    }
    depl_actuels[i] = depl_actuel;
  }
   for (int i = nbTotalDeplacements; i > 0; i--)
    cout << depl_actuels[i - 1] << endl;
}
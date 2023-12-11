#include <iostream>
#include <string>
using namespace std;
int main() {
  int nbLignes, nbMots;
  cin >> nbLignes >> nbMots;
  cin.ignore();
  int liste[200] = {0};
   
  for(int l = 0; l < nbLignes; l++) {
    for(int n = 0; n < nbMots; n++) {
      string mot;
      cin >> mot;
      liste[mot.length()] = liste[mot.length()] + 1;
    }   
    cin.ignore();     
  }

  for (int i = 1; i < 101; i++) {   
    if (liste[i] > 0) {
      cout << i << " : " << liste[i] << endl;
    }           
  }
}
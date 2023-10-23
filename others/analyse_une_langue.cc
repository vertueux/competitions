#include <iostream>
using namespace std;

int main() {
  string entree; 
  char _char;
  int nbLignes;
  cin >> _char;
  cin >> nbLignes;
  cin.ignore();
   
  int rslt = 0;
  for ( int i = 0; i < nbLignes; i++) {
    getline(cin, entree); 
    for(int j = 0; j < (int)entree.length(); j++) {
      if (_char == entree[j])
        rslt++;
    }
  }
   cout << rslt << endl;
}
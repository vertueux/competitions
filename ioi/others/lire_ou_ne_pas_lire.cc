#include <iostream>
using namespace std;

int main() {
  int nbLivres;
  int max = 0;
  string titre;
  cin >> nbLivres;
  cin.ignore();
  for(int i = 0; i < nbLivres; i++) {
    getline(cin, titre);
    if((int)titre.length() > max) {
      max = (int)titre.length();
      cout << titre << endl;
    }
   }
}
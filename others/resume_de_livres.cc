#include <iostream>
using namespace std;

int main() {
  int nbLivres;
  int longueurMinimale;
  string titre, resume;
  cin >> nbLivres >> longueurMinimale;
  cin.ignore();
  for(int i = 0; i < nbLivres; i++) {
    getline(cin, titre);
    getline(cin, resume);    
    if((int)resume.length() < longueurMinimale)
      cout << titre << endl;
  }
}
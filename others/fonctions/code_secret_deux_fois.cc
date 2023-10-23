#include <iostream>
using namespace std;

void demander_code(int code) {
  int mot_passe = 0;
  while(mot_passe != code) {
    cout << "Entrez le code :" << endl;
    cin >> mot_passe;
  }
}

int main() {
   int code = 4242;
   demander_code(code);
   cout << "Encore une fois." << endl;
   demander_code(code);
   cout << "Bravo." << endl; 
}
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
   int code1 = 4242, code2 = 2121;
   demander_code(code1);
   cout << "Premier code bon." << endl;
   demander_code(code2);
   cout << "Bravo." << endl; 
}
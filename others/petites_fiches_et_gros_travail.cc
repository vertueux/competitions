#include <iostream>
#include <string>
using namespace std;

int main() {
  string auteur, titre; 
  for (int i = 0; i < 6; i++) {
    getline(cin, auteur);
    getline(cin, titre); 
    cout << titre << endl;
    cout << auteur << endl;
  }
}
#include <iostream>
using namespace std;

void demander_dentelle(char lettre, int longueur) {
  for (int i = 0; i < longueur; i++) {
    cout << lettre;
  }
  cout << endl;
}
int main() {
  int longueur;
  cin >> longueur;
  demander_dentelle('X', longueur);
  demander_dentelle('#', longueur);
  demander_dentelle('i', longueur);
}
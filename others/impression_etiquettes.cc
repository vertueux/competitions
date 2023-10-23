#include <iostream>
using namespace std;

int main() {
  string entree;
  getline(cin, entree);
  for (int i = 0; i < (int)entree.length(); i++) {
    cout << entree[i] << endl;
  } 
}
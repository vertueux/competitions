#include <iostream>
#include <string>
using namespace std;
 
int main() {
  string entree;
  getline(cin, entree);
  if ((int)entree.length() > 100) return 0;
  for(int i = 0; i < (int)entree.length(); i++) {
    if (entree[i] == ' ')
      cout << '_';
    else
      cout << entree[i];
  }
  cout << endl;
}
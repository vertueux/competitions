#include <iostream>
#include <string>
using namespace std;

int main() {
  string entree;
   for (int i = 0; i < 2; i++) {
      getline(cin, entree);
      for (int j = 0; j < (int)entree.length(); j++) {
        if (entree[j] != ' ' && entree[j] != 'A' && entree[j] != 'E' && entree[j] != 'I' && entree[j] != 'O' && entree[j] != 'U' && entree[j] != 'Y')
          cout << entree[j];
      }
      cout << endl;
   }
}
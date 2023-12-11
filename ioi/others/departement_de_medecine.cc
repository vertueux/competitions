#include <iostream>
using namespace std;

int main() {
   int n;
   cin >> n;
   int nb_jours=0, habitants_contamines=1, habitants_contamines2=1;
   while(n > 0) {
      n -= habitants_contamines;
      nb_jours++;
      habitants_contamines = habitants_contamines2 * 2;
      habitants_contamines2 += habitants_contamines;
   }
   cout << nb_jours << endl;
   return 0;
}
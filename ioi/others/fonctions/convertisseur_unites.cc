#include <iostream>
#define PIED_TO_METER 0.3048
#define GRAMME_TO_LIVRE  0.002205
using namespace std;

void conv(double val, char unitee) {
   double rslt = 0;
   switch (unitee) {
      case 'm': 
        rslt = val / PIED_TO_METER; 
        cout << rslt << " " << 'p' << endl;
        break;
      case 'g': 
        rslt = val * GRAMME_TO_LIVRE;
        cout << rslt << " " << 'l' << endl;
        break;
      case 'c': 
        rslt = 32 + 1.8 * val;
        cout << rslt << " " << 'f' << endl;
        break;
   }
}

int main() {
   int mesure;
   cin >> mesure;
   for(int i = 0; i < mesure; i++) {
      double val;
      char unite;
      cin >> val >> unite;
      
      conv(val, unite);
   }
}
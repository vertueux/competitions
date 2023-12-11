#include <iostream>
using namespace std;

int main() {
  int nbZones, rslt = 0;
  cin >> nbZones;
  if((nbZones % 24 ) < 0)
    cout << (24 + nbZones % 24);
  else 
    cout << nbZones % 24  << endl;
}
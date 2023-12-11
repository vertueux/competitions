#include <iostream>
using namespace std;

int main() {
  int nbEmplacements;
  cin >> nbEmplacements;
  if (nbEmplacements > 1000) return 0;
  int nums_marchands[nbEmplacements];
  for (int i = 0; i < nbEmplacements; i++) {
    int num;
    cin >> num;
    nums_marchands[i] = num;
  }
  for (int i = 0; i < nbEmplacements; i++) {
    cout << nums_marchands[i] << endl;
  }
}
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int nb_habitants, ind;
  cin >> nb_habitants;
  int richesse[nb_habitants] = {0};
  for (int i = 0; i < nb_habitants; i++) {
    cin >> richesse[i];
  }
  sort(richesse, richesse + nb_habitants);
  if (nb_habitants % 2 != 0) {
    ind = (nb_habitants - 1) / 2;
    cout << richesse[ind] << endl;
  } else {
    ind = nb_habitants / 2;   
    double mediane = richesse[ind - 1] + richesse[ind];
    mediane /= 2 ;
    cout << mediane << endl;
  }
}
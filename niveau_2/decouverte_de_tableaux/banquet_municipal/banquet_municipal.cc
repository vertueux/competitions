#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int nb_positions, nb_changements;
  cin >> nb_positions >> nb_changements;
  int positions[nb_positions] = {0};  
  for (int i = 0 ; i < nb_positions; i++) {
    cin >> positions[i];
  }
  int pos_1, pos_2, tm;
  for (int i = 0; i < nb_changements; i++) {
    cin >> pos_1 >> pos_2;
    tm = positions[pos_1];
    positions[pos_1] = positions[pos_2];
    positions[pos_2] = tm;
  }
  for (int i = 0 ; i < nb_positions; i++) {
    cout << positions[i] << endl;
  }
}
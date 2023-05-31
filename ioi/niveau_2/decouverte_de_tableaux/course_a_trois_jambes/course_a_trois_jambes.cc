#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int nb_participants; 
  cin >> nb_participants;
  int participants[nb_participants] = {0};
  for (int i = 0 ; i < nb_participants; i++) {
    cin >> participants[i];
  }
  sort(participants, participants + nb_participants);
  for (int i = 0; i < nb_participants/2; i++) {
    cout << participants[i] << " " << participants[nb_participants - 1 - i] << endl;
  }
}
#include <iostream>
using namespace std;
int main() {
   for(int i = 0; i < 20; i++) {
      for(int j = 0; j < 20; j++) {
        cout << "O";
        cout << "X";
      }
      cout << endl;
      for(int j = 0; j < 20; j++) {
        cout << "X";
        cout << "O";
      }
      cout << endl;
   }
}
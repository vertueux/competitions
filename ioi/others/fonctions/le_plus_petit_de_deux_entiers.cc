#include <iostream>
using namespace std;

int min2(int e1, int e2) {
  if (e1 > e2) return e2;
  if (e2 > e1) return e1;
  if (e2 == e1) return e1;
}

int main() {
  int plus_petit = 0;
  for (int i = 0; i < 10; i++) {
    int val;
    cin >> val;
    if (i == 0) plus_petit = val;
    plus_petit = min2(plus_petit, val);
  }
  cout << plus_petit << endl;
}
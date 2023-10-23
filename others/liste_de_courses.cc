#include <iostream>
using namespace std;

int main() {
  int ingredients[] = {9, 5, 12, 15, 7, 42, 13, 10, 1, 20};
  int sum = 0;
  for (int i = 0; i < 10; i++) {
    int val;
    cin >> val;
    sum += ingredients[i] * val;
  }
  cout << sum << endl;
}
#include <iostream>
using namespace std;

int main() {
  int stock[10] = {0};
  int nbOperations, operations;
  cin >> nbOperations;
  for (int i = 0; i < nbOperations; i++) {
    int quantite;
    cin >> operations >> quantite;
    stock[operations - 1] += quantite;
  }
  for (const auto& e : stock) 
    cout << e << endl;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
  string j1, j2;
  int p_egale = 0;
  bool fin_jeux = false;
  int a = 0;
  
  getline(cin, j1);
  getline(cin, j2);
  while (a < (int)j1.length() || a < (int)j2.length()) {
    if(j1[a] == j2[a]) {
      p_egale++; 
    } else if(j1[a] < j2[a]) {
      cout << "1" << endl;
      fin_jeux = true;
    } else {
      cout << "2" << endl;
      fin_jeux = true;
    }
      
    if(a == (int)j1.length() - 1 && a < (int)j2.length() -1 && fin_jeux == false) {
      cout << "2" << endl;
      fin_jeux = true;  
    }
      
    if(a == (int)j2.length() - 1 && a < (int)j1.length() -1 && fin_jeux == false) {
      cout << "1" << endl;
      fin_jeux = true;  
    }
      
    if(a == (int)j2.length() - 1 && a == (int)j1.length() -1 && fin_jeux == false) {
      cout << "=" << endl;
      fin_jeux = true;  
    }
      
    if(fin_jeux) {
      cout << p_egale << endl;
      break;
    }
    a++;
  }
}
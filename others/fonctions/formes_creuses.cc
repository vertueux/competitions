#include <iostream>
using namespace std;

void afficher_ligne(int nb) {  
  for (int i = 0; i < nb; i++)  {
    cout << 'X';
  }
  cout << endl << endl;
}

void afficher_rectangle(int lignes, int cols) {
  for (int i = 0; i < lignes; i++) {
    cout << '#';
    if (i == 0 || i == lignes - 1 ) {
      if(cols != 1) {
        for(int j = 0; j < cols - 1; j++) {
          cout << '#';
        }
      }
    } else {
      if(cols != 1) {
        for(int a = 0; a < (cols - 2); a++) {cout << " ";}
        cout << '#';
      }
    }
    cout << endl;
  }
  cout << endl;
}

void afficher_triangle(int lignes) {
  for(int i = 0; i < lignes; i++) {
    cout << '@';
    if (i == 0)
      cout << endl;
    else if (i != (lignes - 1) && i != 0) {
      for (int b = 0; b < (i - 1); b++) {cout << " ";}
      cout << '@';
      cout << endl;
    } else {
      for(int c = 0; c < (lignes - 1); c++) {
        cout << '@';
      }
        cout << endl;
    }  
  }
  cout << endl;
}


int main() {
  int nb_x, nb_l_rect, nb_c_rect, nb_l_tri;
  cin >> nb_x >> nb_l_rect >> nb_c_rect >> nb_l_tri;
  afficher_ligne(nb_x);
  afficher_rectangle(nb_l_rect, nb_c_rect);
  afficher_triangle(nb_l_tri);
}
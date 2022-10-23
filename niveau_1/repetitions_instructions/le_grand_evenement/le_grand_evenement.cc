#include <iostream>
#include "robot.h"
using namespace std;
int main() {
   for (int i = 0; i < 9; i++) {
     haut();
   }
   for (int i = 0; i < 9; i++) {
     droite();
   }
   for (int i = 0; i < 9; i++) {
     bas();
   }
   for (int i = 0; i < 4; i++) {
     gauche();
     for (int j = 0; j < 8; j++) {
       haut();
     }
     gauche();
     for (int k = 0; k < 8; k++) {
       bas();
     }
   }
   gauche();
}
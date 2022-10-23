#include "robot.h"

void se_rendre_a_la__charrette() {
  for (int a = 0; a < 15; a++) {
    droite();
  }
}

void revenir_au_point_de_depart() {
  for (int a = 0; a < 15; a++) {
    gauche();
  }
}

int main() {
  for (int i = 0; i < 20; i++) {
    ramasser();
    se_rendre_a_la__charrette();
    deposer();
    revenir_au_point_de_depart();
  }
}
#include "robot.h"
int main() {
  for (int i = 0; i < 21; i++) {
    haut();
    droite();
  }
  for (int j = 0; j < 21; j++) {
    gauche();
    bas();
  }
}
#include "robot.h".

int main() {
  for (int i = 0; i < 108; i++) {
    for (int j = 0; j < 13; j++) {
      haut();
    }
    for (int k = 0; k < 13; k++) {
      droite();
    }
    for (int l = 0; l < 13; l++) {
      bas();
    }
    for (int m = 0; m < 13; m++) {
      gauche();
    }
  }
}
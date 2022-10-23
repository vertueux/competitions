# Sujet

Vous explorez les ruines de la cité de Machak, toute proche du village, quand tout à coup un énorme rocher dévale les marches de la pyramide au pied de laquelle vous vous trouvez. Vous n'avez que le temps de vous jeter à terre alors que le rocher vous passe juste au-dessus. Vous apercevez alors avec horreur qu'un colosse descend à toute vitesse dans votre direction. À votre grand soulagement, le colosse passe à côté de vous et s'excuse de vous avoir effrayé(e). Il récupère ensuite le rocher et commence à escalader la pyramide pour remonter le rocher tout en haut. Alors qu'il est sur le point d'arriver en haut, il perd prise et le rocher dévale de nouveau la pyramide…

En redescendant, le colosse vous explique que, même si c'est sans espoir, il doit continuer sans relâche à essayer de poser le rocher au sommet de la pyramide pour ne pas être puni par les dieux. Vous décidez de l'aider pendant quelque temps afin d'en apprendre plus sur cette malédiction.

## Ce que doit faire votre programme :
Programmez votre robot pour qu'il mène le rocher tout en haut des 21 marches de la pyramide et redescende ensuite tout en bas. Par exemple, si la pyramide ne faisait que deux marches de haut, votre robot devrait effectuer le trajet illustré ci-dessous : haut, droite, haut, droite, gauche, bas, gauche, bas.

 45
23#
1###
puis
 65
87#
9###

### Commandes pour cet exercice
Utilisez les quatre instructions ci-dessous pour déplacer le robot de case en case dans les différentes directions :

```
haut();
bas();
gauche();
droite();
```

N'oubliez pas d'inclure la ligne suivante en haut de votre programme pour utiliser ces commandes :

```cpp
#include "robot.h"
```
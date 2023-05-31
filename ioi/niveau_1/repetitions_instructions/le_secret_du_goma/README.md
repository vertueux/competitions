# Sujet

Vous avez remarqué un rituel assez étrange : tous les trois jours, les villageois passent la soirée à parsemer d'une sorte de gros grain de maïs le long de l'allée centrale du village. Le lendemain, le grain a disparu, mais l'allée est pleine de ce qui ressemble à de petites mottes de terre noire que les villageois ramassent. L'un des villageois vous explique que le grain est une offrande aux Borloks, de gros animaux qui leur laissent ces « mottes » en échange : ce que vous preniez pour des mottes de terre sont en fait des bouses de Borloks !

Vous êtes pris(e) de nausées en apprenant qu'ils les utilisent pour fabriquer le Goma, cette sorte de pain noir qu'ils vous ont servi à chaque repas depuis votre arrivée… Tout en cachant votre dégoût de peur de vexer les villageois, vous décidez d'enquêter sur la composition exacte du Goma. Vous vous proposez donc pour aider à ramasser les bouses de Borloks qui jonchent l'allée.

## Ce que doit faire votre programme :
L'allée centrale du village peut être représentée comme une série de 17 cases, dont la plupart contiennent une bouse de Borlok :

R...............-
Le robot se trouve initialement dans la case de gauche. Il doit se déplacer case par case en allant vers la droite, et ramasser sur chaque case la bouse qui s'y trouve. Enfin, votre robot doit déposer tout ce qu'il a ramassé dans la boîte située sur la 17e case, tout à droite.

Votre programme ne doit pas faire plus d'une dizaine de lignes.

### Commandes pour cet exercice
Pour résoudre ce problème, vous allez devoir :

```
Aller à gauche
Aller à droite
Ramasser une bouse
Déposer les bouses
```

Il s'agit donc à nouveau de :

```
gauche();
droite();
ramasser();
deposer();
```

Le programme d'exemple suivant déplace le robot de quelques cases :

```cpp
#include <iostream>
#include "robot.h"
using namespace std;
int main()
{
   droite();
   ramasser();
   droite();
   ramasser();
   gauche();
   gauche();
   deposer();
}
```
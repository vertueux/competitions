# Sujet

Alors que vous cherchez un endroit tranquille pour vous reposer, vous remarquez dans une rue une personne âgée qui avance lentement tout en portant sur sa tête un grand récipient rempli d'eau. Vous décidez de lui venir en aide, et de programmer votre robot pour qu'il aille aider cette personne à transporter l'eau jusqu'à sa maison.

## Ce que doit faire votre programme :
Votre programme doit diriger le robot dans la rue schématisée ci-dessous :

#P-D-----------------------------M#

La rue est représentée par 33 cases entre deux murs de briques. Votre robot se trouve au départ sur la 3e case. Votre programme doit le déplacer jusqu'à l'endroit où se trouve la personne âgée, au récipient d'eau en bleu, puis afficher précisément le texte "Bonjour, laissez-moi vous aider" (avec un retour à la ligne à la fin de la phrase). Ensuite, il doit ramasser le récipient qui se trouve sur cette même case, et avancer de 32 cases pour le déposer à la maison. Il ne doit à aucun moment se déplacer sur les cases contenant un mur.

Votre programme ne doit pas faire plus d'une vingtaine de lignes.

### Commandes pour cet exercice
Pour résoudre ce problème, le robot va devoir effectuer les opérations suivantes :

```
Aller à gauche
Aller à droite
Ramasser le récipient
Déposer le récipient
```

Deux instructions permettent au robot de ramasser un objet qui se trouve au même emplacement que lui, et de déposer l'objet qu'il porte à l'endroit où il se trouve. Elles s'écrivent comme suit en C++ :

```
ramasser();
deposer();
```

Au final, vous devez donc utiliser ces quatre instructions pour résoudre ce problème :

```
gauche();
droite();
ramasser();
deposer();
```

En guise de support, voici un programme qui amène le robot jusqu'à la maison, et affiche une exclamation :

```cpp
#include <iostream>
#include "robot.h"
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
   repeat (30)
   {
      droite();
   }
   cout << "Rentré !" << endl;
}
```
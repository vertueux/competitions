# Sujet

Lors d'une randonnée en montagne aux alentours du village, vous entendez parler du mont Kailash, un endroit hautement sacré depuis des millénaires. Ce mont est considéré comme le centre spirituel de la planète ; de nombreuses personnes viennent y effectuer un pèlerinage. Ce pèlerinage consiste à faire 108 fois le tour de la montagne, afin d'être lavé de toutes ses impuretés. Le mont est très grand, et chaque tour complet requiert 52 km de marche.

Beaucoup de gens ne peuvent pas faire le pèlerinage car cela impose de porter beaucoup de matériel (tente, vêtements, nourriture), ce que peu de personnes ont la force de faire. Vous proposez l'aide de votre robot, qui portera une bonne masse de matériel, ce qui permettra à bien plus de fidèles de se joindre au voyage !

## Ce que doit faire votre programme :
Votre robot doit faire 108 fois le tour du chemin vert représenté ci-dessous, en tournant dans le sens des aiguilles d'une montre.

```
################
#              #
# ############ #
# ############ #
# ############ #
# ############ #
# ############ #
# ############ #
# ############ #
# ############ #
# ############ #
# ############ #
# ############ #
# ############ #
#D             #
################
```

Le robot se trouve initialement en bas à gauche. Chaque case représente 1 km, donc pour faire un tour, le robot doit se déplacer successivement de 13 km dans chacune des 4 directions.

### Commandes pour cet exercice
Utilisez les quatre instructions ci-dessous pour déplacer le robot d'une case dans une direction :

```
haut();
bas();
gauche();
droite();
```

N'oubliez pas d'écrire en début de programme la ligne : `#include "robot.h".`
# Sujet

Par cette belle journée d'automne, vous accompagnez les villageois qui partent faire les vendanges. Vous remarquez tout de suite un homme faisant de manière répétitive des allers-retours entre les cueilleurs et la charrette qui doit être remplie à ras bord avant la fin de la journée. Cet homme tombe de fatigue et vous lui proposez de le relayer pendant une petite heure. Bien évidemment, vous allez utiliser votre robot pour effectuer cette tâche à votre place.

## Ce que doit faire votre programme :
Le champ est représenté ci-dessous :

```
  1   2   3   4   5   6   7   8   9   10  11  12  13  14  15  16
| R | . | . | . | . | . | . | . | . | . | . | . | . | . | . | C |
```

Le robot est initialement tout à gauche, là où se trouve un grand tas de raisins. Il devra, 20 fois :

 * ramasser des raisins pour remplir la hotte de ramassage ;
 * se rendre à la charrette ;
 * déposer le contenu de la hotte ;
 * revenir au point de départ.

### Commandes pour cet exercice
Ici, vous allez :

```
Aller à gauche
Aller à droite
Ramasser les raisins
Déposer les raisins
Ce qui correspond aux quatre instructions :
```

```
gauche();
droite();
ramasser();
deposer();
```
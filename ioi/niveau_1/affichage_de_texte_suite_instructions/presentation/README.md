# Sujet

L'un des villageois, Camthalion, est très intéressé par votre robot. Il vous a longuement observé(e) alors que vous écriviez votre programme, et a souhaité écrire le sien. Le robot affiche cependant les lignes dans le mauvais ordre. Pouvez-vous y remédier ?

## Ce que vous devez faire :
Camthalion a écrit le programme ci-dessous :
```cpp
#include <iostream>
using namespace std;
int main()
{
   cout << "Ma devise est 'Parler peu mais parler bien'." << endl;
   cout << "Je m'appelle Camthalion" << endl;
   cout << "Coucou !" << endl;
}
```
et il obtient en sortie :

```
Ma devise est 'Parler peu mais parler bien'.
Je m'appelle Camthalion
Coucou !
```
Il veut que son programme affiche à la place :

```
Coucou !
Je m'appelle Camthalion
Ma devise est 'Parler peu mais parler bien'.
Il vous demande d'effectuer les modifications nécessaires.
```
# Sujet

Un enfant vous a demandé l'autorisation de travailler un peu sur votre robot afin de réviser ses leçons de mathématiques. Après plus d'une heure, n'ayant pas de nouvelles de sa part, vous allez le voir et il vous explique qu'il n'arrive pas à faire fonctionner son programme. Vous souhaitez donc l'aider à le corriger.

## Ce que doit faire votre programme :
Corrigez les erreurs contenues dans le programme ci-dessous afin qu'il affiche 13 fois de suite le texte 9 * 8 = 72.

```cpp
#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
   repeat 13
   {
      cout << "9 * 8 = 72 << endl;
   }
}
```
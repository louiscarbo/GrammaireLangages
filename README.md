# Description

Dans ce TP, nous avons implémenté un analyseur syntaxique ascendant LALR(1) afin d'évaluer des expressions arithmétiques simples. Il utilise un automate à pile et le design pattern State pour gérer les transitions entre les états de l’analyseur. En entrée, le programme prend une expression arithmétique sous forme de chaîne de caractères. Il l’analyse et affiche le résultat de son évaluation.

# Périmètre de notre TP :

## Fonctionnalités supportées

- Opérations arithmétiques basiques : addition (`+`) et multiplication (`*`)
- Parentheses : `( )`
- Nombres entiers : `0`, `1`, `2`, etc.
- Priorité des opérateur, avec la multiplication ayant une priorité plus élevée que l’addition.
- Associativité à gauche : Pour les opérateurs de même priorité (ex: `1+7+45` est évalué comme `(1 + 7) + 45`).

## Fonctionnalités non Supportées

- Variables : cette version ne gère pas les variables (ex: `x+2`).
- Opérations autres que `+` et `*` : Soustraction, division, etc.
- Nombres décimaux : Seuls les entiers sont supportés.
- Expressions mal formées : Le programme peut planter ou afficher une erreur de syntaxe pour des entrées invalides



# Compilation
Un `Makefile` est fourni pour simplifier la compilation. Voici les commandes disponibles :

- `make` : Compile le programme et génère l'exécutable `grammaire`.
- `make clean` : Supprime les fichiers objets et l'exécutable générés (utile pour une recompilation propre).


Il suffit ensuite d'exécuter l'exécutable produit nommé `grammaire`et de faire suivre cela par l'expression à évaluer sous forme de string.

Un exemple valide : `./grammaire "(10+4)*(10)"`

Il faut bien faire attention à respecter cette syntaxe exacte, puisque des espaces par exemple provoquerons des erreurs de syntaxe puisque non supportés.

Exemples d'entrées invalides : `./grammaire "x+2"`,  `./grammaire "( 10 + 4)"`,  `./grammaire "7*2 "`


# Gestion des erreurs

En cas d'erreur de syntaxe (par exemple, une entrée mal formée ou un symbole inattendu), le programme :
1. **Affiche un message d'erreur** sur la sortie standard indiquant l'état de l'automate où l'erreur s'est produite.
   Exemple : pour `./grammaire "10+2 "`, la sortie sera
   "Analyse de la chaine : 10*2
   Erreur de syntaxe à l'état 3"

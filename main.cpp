#include <iostream>
#include <map>
#include "lexer.h"
#include "automate.h"
#include "expr.h"

using namespace std;

int main(int argc, char *argv[])
{

    if (argc != 2)
    {
        cerr << "Erreur : nombre d'arguments invalide.\n"
             << "Vous devez entrer exactement une expression arithmétique.\n\n"
             << "Exemple :\n"
             << "  " << argv[0] << " \"(1+2)*3\"\n";
        return 1;
    }

    string chaine = argv[1];

    Lexer *l = new Lexer(chaine);
    Automate *automate = new Automate(l);

    cout << "Analyse de la chaine : " << chaine << endl;

    if (!automate->run())
    {
        delete l;
        delete automate;
        return 1;
    }

    Expr* expressionFinale = (Expr*) automate->popSymbol();

    map<string, double> variables;

    double resultat = expressionFinale->eval(variables);

    cout << "Résultat final = " << resultat << endl;

    delete expressionFinale;
    delete l;
    delete automate;

    return 0;
}

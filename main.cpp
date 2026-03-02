#include <iostream>
#include <map>
#include "lexer.h"
#include "automate.h"
#include "expr.h"

int main(void) {
    string chaine("(1+34)*123");
    Lexer* l = new Lexer(chaine);
    Automate* automate = new Automate(l);

    cout << "Analyse de la chaine : " << chaine << endl;

    automate->run();

    Expr* expressionFinale = (Expr*) automate->popSymbol();

    map<string, double> variables;

    double resultat = expressionFinale->eval(variables);

    cout << "Résultat final = " << resultat << endl;

    delete expressionFinale;
    delete l;
    delete automate;

    return 0;
}

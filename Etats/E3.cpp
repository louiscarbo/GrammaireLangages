#include "E3.h"
#include "../automate.h"
#include "../exprVal.h"
#include "../symbole.h"
#include <iostream>

bool E3::transition(Automate & automate, Symbole * s) {
    switch (*s) {
        case PLUS:
        case MULT:
        case CLOSEPAR:
        case FIN: {
            Entier* s1 = (Entier*) automate.popSymbol();
            automate.reduction(1, new ExprVal(s1->getValeur()));
            return true;
        }
        default:
            cout << "Erreur de syntaxe à l'état 3" << endl;
            return false;
    }
}

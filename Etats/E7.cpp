#include "E7.h"
#include "E5.h"
#include "../automate.h"
#include "../exprPlus.h"
#include <iostream>

bool E7::transition(Automate & automate, Symbole * s) {
    switch (*s) {
        case PLUS:
        case CLOSEPAR:
        case FIN: {
            Expr* e1 = (Expr*) automate.popSymbol();
            automate.popAndDestroySymbol();
            Expr* e2 = (Expr*) automate.popSymbol();
            automate.reduction(3, new ExprPlus(e2, e1));
            return true;
        }
        case MULT:
            automate.decalage(s, new E5);
            return true;
        default:
            cout << "Erreur de syntaxe à l'état 7" << endl;
            return false;
    }
}

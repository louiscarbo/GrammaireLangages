#include "E9.h"
#include "../symbole.h"
#include "../automate.h"
#include <iostream>

TransitionResult E9::transition(Automate & automate, Symbole * s) {
    switch (*s) {
        case PLUS:
        case MULT:
        case CLOSEPAR:
        case FIN: {
            automate.popAndDestroySymbol();
            Symbole* e = automate.popSymbol();
            automate.popAndDestroySymbol();
            automate.reduction(3, e);
            return TransitionResult::Continue;
        }
        default:
            cout << "Erreur de syntaxe à l'état 9" << endl;
            return TransitionResult::Error;
    }
}

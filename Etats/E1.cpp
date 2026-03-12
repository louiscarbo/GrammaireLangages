#include "E1.h"
#include "E4.h"
#include "E5.h"
#include "../automate.h"
#include <iostream>

TransitionResult E1::transition(Automate & automate, Symbole * s) {
    switch (*s) {
        case PLUS:
            automate.decalage(s, new E4);
            return TransitionResult::Continue;
        case MULT:
            automate.decalage(s, new E5);
            return TransitionResult::Continue;
        case FIN:
            cout << "Expression acceptée !" << endl;
            return TransitionResult::Accept;
        default:
            cout << "Erreur de syntaxe à l'état 1" << endl;
            return TransitionResult::Error;
    }
}

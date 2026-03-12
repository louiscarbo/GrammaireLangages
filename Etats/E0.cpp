#include "E0.h"
#include "E1.h"
#include "E2.h"
#include "E3.h"
#include "../automate.h"
#include <iostream>

TransitionResult E0::transition(Automate & automate, Symbole * s) {
    switch (*s) {
        case INT:
            automate.decalage(s, new E3);
            return TransitionResult::Continue;
        case OPENPAR:
            automate.decalage(s, new E2);
            return TransitionResult::Continue;
        case EXPR:
            automate.transitionsimple(s, new E1);
            return TransitionResult::Continue;
        default:
            cout << "Erreur de syntaxe à l'état 0" << endl;
            return TransitionResult::Error;
    }
}

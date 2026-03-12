#include "E5.h"
#include "E2.h"
#include "E3.h"
#include "E8.h"
#include "../automate.h"
#include <iostream>

TransitionResult E5::transition(Automate & automate, Symbole * s) {
    switch (*s) {
        case INT:
            automate.decalage(s, new E3);
            return TransitionResult::Continue;
        case OPENPAR:
            automate.decalage(s, new E2);
            return TransitionResult::Continue;
        case EXPR:
            automate.transitionsimple(s, new E8);
            return TransitionResult::Continue;
        default:
            cout << "Erreur de syntaxe à l'état 5" << endl;
            return TransitionResult::Error;
    }
}

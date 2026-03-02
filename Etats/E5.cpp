#include "E5.h"
#include "E2.h"
#include "E3.h"
#include "E8.h"
#include "../automate.h"
#include <iostream>

bool E5::transition(Automate & automate, Symbole * s) {
    switch (*s) {
        case INT:
            automate.decalage(s, new E3);
            return true;
        case OPENPAR:
            automate.decalage(s, new E2);
            return true;
        case EXPR:
            automate.transitionsimple(s, new E8);
            return true;
        default:
            cout << "Erreur de syntaxe à l'état 5" << endl;
            return false;
    }
}

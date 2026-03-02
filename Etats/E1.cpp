#include "E1.h"
#include "E4.h"
#include "E5.h"
#include "../automate.h"
#include <iostream>

bool E1::transition(Automate & automate, Symbole * s) {
    switch (*s) {
        case PLUS:
            automate.decalage(s, new E4);
            return true;
        case MULT:
            automate.decalage(s, new E5);
            return true;
        case FIN:
            cout << "Expression acceptée !" << endl;
            return false;
        default:
            cout << "Erreur de syntaxe à l'état 1" << endl;
            return false;
    }
}

#include "E0.h"
#include "E1.h"
#include "E2.h"
#include "E3.h"
#include "E6.h"
#include "../automate.h"
#include <iostream>

bool E2::transition(Automate &automate, Symbole *s)
{
    switch (*s)
    {

    case INT:
        automate.decalage(s, new E3);
        return true;
    case OPENPAR:
        automate.decalage(s, new E2);
        return true;
    case EXPR:
        automate.transitionsimple(s, new E6);
        return true;

    default:
        cout << "Erreur de syntaxe à l'état 2" << endl;
        return false;
    }
}

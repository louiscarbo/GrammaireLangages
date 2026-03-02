#include "E2.h"
#include "E3.h"
#include "E4.h"
#include "E7.h"
#include "../automate.h"
#include <iostream>

bool E4::transition(Automate &automate, Symbole *s)
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
        automate.transitionsimple(s, new E7);
        return true;

    default:
        cout << "Erreur de syntaxe à l'état 4" << endl;
        return false;
    }
}

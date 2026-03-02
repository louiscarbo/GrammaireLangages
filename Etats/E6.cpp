#include "E0.h"
#include "E1.h"
#include "E2.h"
#include "E3.h"
#include "E4.h"
#include "E5.h"
#include "E6.h"
#include "E7.h"
#include "E8.h"
#include "E9.h"
#include "../automate.h"

bool E6::transition(Automate & automate, Symbole * s) {
    switch (*s)
    {

    case PLUS:
        automate.decalage(s, new E4);
        return true;

    case MULT:
        automate.decalage(s, new E5);
        return true;

    case CLOSEPAR:
        automate.decalage(s, new E9);
        return true;

    default:
        return false;
    }
}

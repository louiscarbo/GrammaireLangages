#include "E0.h"
#include "E1.h"
#include "E2.h"
#include "E3.h"
#include "E8.h"
#include "../automate.h"
#include "../exprMult.h"

TransitionResult E8::transition(Automate &automate, Symbole *s)
{
    switch (*s)
    {

    case PLUS:
    case MULT:
    case CLOSEPAR:
    case FIN: {
        Expr* e1 = (Expr*) automate.popSymbol();
        automate.popAndDestroySymbol();
        Expr* e2 = (Expr*) automate.popSymbol();
        automate.reduction(3, new ExprMult(e2, e1));
        return TransitionResult::Continue;
    }
    default:
        break;
    }

    return TransitionResult::Error;
}


#include "automate.h"

void Automate::transitionsimple(Symbole *s, Etat *e)
{
    symbolstack.push_back(s);
    statestack.push_back(e);
}

void Automate::reduction(int n, Symbole *s)
{
    for (int i = 0; i < n; i++)
    {
        delete (statestack.back());
        statestack.pop_back();
    }
    statestack.back()->transition(*this, s);
}

void Automate::decalage(Symbole *s, Etat *e)
{
    symbolstack.push_back(s);
    statestack.push_back(e);
    lexer->Avancer();
}

bool Automate::run() {
    bool nextState = true;
    while (nextState) {
        Symbole * s = lexer->Consulter();

        // Il faut maintenant faire appel à la transition sur l'état courant
        // nextState = ...
    }
    return true; // (à adapter selon si on accepte ou si on a une erreur)
}
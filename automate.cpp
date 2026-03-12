
#include "automate.h"
#include "./Etats/E0.h"
#include "etat.h"

Automate::Automate(Lexer* lexer) : lexer(lexer) {
    statestack.push_back(new E0());
}

Automate::~Automate() {
    for (Etat* e : statestack) {
        delete e;
    }
    statestack.clear();
}

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

Symbole *Automate::popSymbol()
{
    Symbole *s = symbolstack.back();
    symbolstack.pop_back();
    return s;
}

void Automate::popAndDestroySymbol()
{
    delete symbolstack.back();
    symbolstack.pop_back();
}

bool Automate::run()
{
    while (true)
    {
        Symbole *s = lexer->Consulter();
        Etat *currentState = this->statestack.back();
        TransitionResult result = currentState->transition(*this, s);

        if (result == TransitionResult::Accept)
        {
            return true;
        }
        if (result == TransitionResult::Error)
        {
            return false;
        }
    }
}

#include "../etat.h"

class E2 : public Etat
{
    public:
        E2() : Etat("E2") {}
        TransitionResult transition(Automate &automate, Symbole *s) override;
};

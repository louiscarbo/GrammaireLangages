#include "../etat.h"

class E3 : public Etat
{
    public:
    E3() : Etat("E3") {}
        TransitionResult transition(Automate &automate, Symbole *s) override;
};

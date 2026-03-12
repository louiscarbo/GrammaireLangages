#include "../etat.h"

class E6 : public Etat
{
public:
    E6() : Etat("E6") {}
    TransitionResult transition(Automate &automate, Symbole *s) override;
};

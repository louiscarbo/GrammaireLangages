#include "../etat.h"

class E5 : public Etat
{
public:
    E5() : Etat("E5") {}
    TransitionResult transition(Automate &automate, Symbole *s) override;
};

#include "../etat.h"

class E8 : public Etat
{
public:
    E8() : Etat("E8") {}
    TransitionResult transition(Automate &automate, Symbole *s) override;
};

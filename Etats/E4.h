#include "../etat.h"

class E4 : public Etat
{
public:
    E4() : Etat("E4") {}
    TransitionResult transition(Automate &automate, Symbole *s) override;
};

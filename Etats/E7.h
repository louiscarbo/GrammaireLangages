#include "../etat.h"

class E7 : public Etat
{
public:
    E7() : Etat("E7") {}
    TransitionResult transition(Automate &automate, Symbole *s) override;
};

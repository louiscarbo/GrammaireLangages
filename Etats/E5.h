#include "../etat.h"

class E5 : public Etat
{
public:
    E5() : Etat("E5") {}
    bool transition(Automate &automate, Symbole *s) override;
};

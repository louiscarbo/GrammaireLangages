#include "../etat.h"

class E9 : public Etat
{
public:
    E9() : Etat("E9") {}
    bool transition(Automate &automate, Symbole *s) override;
};

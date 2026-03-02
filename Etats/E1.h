#include "../etat.h"

class E1 : public Etat
{
    public:
        E1() : Etat("E1") {}
        bool transition(Automate &automate, Symbole *s) override;
};

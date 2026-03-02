#include "../etat.h"

class E0 : public Etat
{
    public:
        E0() : Etat("E0") {}
        bool transition(Automate &automate, Symbole *s) override;
};

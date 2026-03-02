#include "../etat.h"

class E8 : public Etat
{
public:
    E8() : Etat("E8") {}
    bool transition(Automate &automate, Symbole *s) override;
};

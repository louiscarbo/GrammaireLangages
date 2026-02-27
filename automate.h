#include <stack>
#include "etat.h"

class Automate
{
    public:
        void decalage(Symbole * s, Etat * e);
        void transitionsimple(Symbole * s, Etat * e);
        void reduction(int n,Symbole * s);

    protected:
        stack<Etat> stack;
}

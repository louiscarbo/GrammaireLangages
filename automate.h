#pragma once

#include <vector>
#include "lexer.h"

class Etat;

class Automate
{
    public:
        void decalage(Symbole * s, Etat * e);
        void transitionsimple(Symbole * s, Etat * e);
        void reduction(int n, Symbole * s);
        bool run();

    protected:
        Lexer * lexer;
        std::vector<Symbole *> symbolstack;
        std::vector<Etat *> statestack;
};

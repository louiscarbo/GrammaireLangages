#pragma once

#include <string>
#include "symbole.h"

class Automate;

using namespace std;

class Etat
{
public:
    Etat(string name);
    virtual ~Etat();
    void print() const;
    virtual bool transition(Automate &automate,
                            Symbole *s) = 0;

protected:
    string name;
};

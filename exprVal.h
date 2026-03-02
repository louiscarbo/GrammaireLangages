#pragma once
#include "expr.h"

class ExprVal : public Expr {
public:
    ExprVal(int v);
    ~ExprVal();
    double eval(const map<string, double> &valeurs) override;

protected:
    double valeur;
};

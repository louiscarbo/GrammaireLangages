#pragma once
#include "expr.h"

class ExprPlus : public Expr {
    public:
        ExprPlus(Expr* e1, Expr* e2);
        ~ExprPlus();
        double eval(const map<string, double> &valeurs) override;

    protected:
        Expr* val1;
        Expr* val2;
};

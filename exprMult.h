#pragma once
#include "expr.h"

class ExprMult : public Expr {
    public:
        ExprMult(Expr* e1, Expr* e2);
        ~ExprMult();
        double eval(const map<string, double> &valeurs) override;

    protected:
        Expr* val1;
        Expr* val2;
};

#include "exprMult.h"

ExprMult::ExprMult(Expr* e1, Expr* e2) : val1(e1), val2(e2) {}

ExprMult::~ExprMult() {
    delete val1;
    delete val2;
}

double ExprMult::eval(const map<string, double> &valeurs) {
    return val1->eval(valeurs) * val2->eval(valeurs);
}

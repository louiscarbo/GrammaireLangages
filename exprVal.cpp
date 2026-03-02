#include "exprVal.h"

ExprVal::ExprVal(int v) : valeur(v) {}

ExprVal::~ExprVal() {}

double ExprVal::eval(const map<string, double> &valeurs) {
    return valeur;
}

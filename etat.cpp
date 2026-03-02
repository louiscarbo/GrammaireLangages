#include "etat.h"
#include <iostream>

Etat::Etat(std::string name) : name(std::move(name)) {}

Etat::~Etat() = default;

void Etat::print() const {
    std::cout << name << std::endl;
}

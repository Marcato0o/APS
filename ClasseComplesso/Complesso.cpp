// File Complesso.cpp

#include "Complesso.hpp"
#include <iostream>

ostream& operator<<(ostream& os, const Complesso& c) {
    os << c.re << " + i" << c.imm;
    return os;
}

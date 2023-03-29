// File Oggetto.cpp
#include <iostream>
#include "Oggetto.hpp"

ostream& operator<<(ostream& os, const Oggetto& o) {
    cout << o.descrizione << " con base d'asta " << o.base_asta;
    return os;
}
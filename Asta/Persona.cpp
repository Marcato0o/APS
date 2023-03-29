// File Offerta.cpp
#include <iostream>
#include "Persona.hpp"

ostream& operator<<(ostream& os, const Persona& p) {
    cout << p.nome << " nato il " << p.data_nascita;
    return os;
}
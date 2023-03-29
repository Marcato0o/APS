// File Complesso.hpp

#ifndef OFFERTA_HPP
#define OFFERTA_HPP 

#include <iostream>
#include <cmath>
#include "Persona.hpp"
#include "Oggetto.hpp"
#include "Data.hpp"
#include "Orario.hpp"
using namespace std;

class Offerta {
    friend ostream& operator<<(ostream& os, const Offerta& o);
    public:
        Offerta(Persona* p, Oggetto* ogg, Data d, Orario o, unsigned v) {persona = p; oggetto = ogg; valore = v; data = d; orario = o;}
        Persona* persona;
        Oggetto* oggetto;
        unsigned valore;
        Data data;
        Orario orario;

};
#endif
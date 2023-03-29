// File Aggiudicazione.hpp

#ifndef AGGIUDICAZIONE_HPP
#define AGGIUDICAZIONE_HPP 

#include <iostream>
#include <cmath>
#include "Persona.hpp"
#include "Oggetto.hpp"
#include "Data.hpp"
using namespace std;

class Aggiudicazione {
    friend ostream& operator<<(ostream& os, const Aggiudicazione& a);
    public:
        Aggiudicazione(Persona* p, Oggetto* ogg, unsigned v, Data d) {persona = p; oggetto = ogg; prezzo = v; data = d;}
        Persona* persona;
        Oggetto* oggetto;
        unsigned prezzo;
        Data data;
};
#endif
// File Oggetto.hpp

#ifndef OGGETTO_HPP
#define OGGETTO_HPP 

#include <iostream>
#include <cmath>
using namespace std;

class Oggetto {
    friend ostream& operator<<(ostream& os, const Oggetto& o);
    public:
        Oggetto(string d, unsigned b) {descrizione = d; base_asta = b;}
        unsigned BaseAsta() {return base_asta;}
        string Descrizione() {return descrizione;}
    private: 
        string descrizione;
        unsigned base_asta;

};
#endif
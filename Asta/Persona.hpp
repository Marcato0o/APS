// File Persona.hpp

#ifndef PERSONA_HPP
#define PERSONA_HPP 

#include <iostream>
#include <cmath>
#include "Data.hpp"

using namespace std;

class Persona {
    friend ostream& operator<<(ostream& os, const Persona& p);
    public:
        Persona(string n, Data d) : nome(n) {data_nascita = d;}
        Data DataNascita() const {return data_nascita;}
    private: 
        string nome;
        Data data_nascita;

};
#endif
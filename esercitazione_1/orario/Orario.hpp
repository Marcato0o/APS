// File data.hpp
#ifndef ORARIO_HPP
#define ORARIO_HPP
using namespace std;

class Orario {
    public:
        // Constructors
        Orario(unsigned o, unsigned m, unsigned s) { secondi = s + m * 60 + o * 3600; }
        Orario() { secondi = time(NULL) % 86400; cout << secondi; }
        // Getters
        unsigned const Ora() { return secondi / 3600; }
        unsigned const Minuti() { return secondi / 60; }
        unsigned const Secondi() { return secondi - secondi* (60 + 3600); }        
        // General methods
        void SommaSecondi(unsigned s);
        // Class elements
        private: 
            unsigned secondi;
};

#endif
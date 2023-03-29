// File Asta.hpp

#ifndef ASTA_HPP
#define ASTA_HPP 

#include <iostream>
#include <cmath>
#include "Persona.hpp"
#include "Oggetto.hpp"
#include "Data.hpp"
#include "Orario.hpp"
#include "Offerta.hpp"
#include "Aggiudicazione.hpp"
#include "vector"
using namespace std;

class Asta {
    friend ostream& operator<<(ostream& os, const Asta& a);
    public:
        Asta(Data d_i, Data d_f ) { d_inizio = d_i; d_fine = d_f;}
        void InserisciPartecipante(Persona* p);
        void InserisciOggetto(Oggetto* ogg);
        void RegistraOfferta(Persona* p, Oggetto* ogg, Data d, Orario o, unsigned v);
        bool AggiudicaOggetto(Oggetto* ogg);
        Persona* Partecipante(unsigned i) {return partecipanti[i]; }
        Oggetto* GetOggetto(unsigned i) { return oggetti[i].first; }
        bool EstAggiudicato(Oggetto* ogg) {return oggetti[CercaOggetto(ogg)].second; }
        int NAggiudicazioni() const { return aggiudicazioni.size(); }
        int NOfferte() const {return offerte.size(); }
        Persona* Vincitore(unsigned i) const {return aggiudicazioni[i].persona; } // Non seriva il getter, campo pubblico.
        Persona* Offerente(unsigned i) const {return offerte[i].persona; } // Same
    private:
        vector<pair<Oggetto*,bool>> oggetti;
        vector<Persona*> partecipanti;
        vector<Aggiudicazione> aggiudicazioni;
        vector<Offerta> offerte;
        Data d_inizio;
        Data d_fine;
        int CercaOggetto(Oggetto* ogg);
        int CercaPersona(Persona* p);
        int CercaPartecipante(Persona* p);
        int CercaUltimaOfferta(Oggetto* ogg);
};
#endif
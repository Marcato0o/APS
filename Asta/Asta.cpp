// File Asta.cpp
#include <iostream>
#include "Asta.hpp"

using namespace std;

bool Maggiorenne(Data d1, Data d2) {
    if (d2-d1 >= 365*18)
        return true;
    return false;
}

int ConfrontaOrari(pair<Data, Orario> p1, pair<Data, Orario> p2) {
    if(p1.first == p2.first) {
        if(p1.second == p2.second)
            return 0;
        if(p2.second < p1.second)
            return -1;
        else   
            return 1;
        
    } else {
        if(p2.first < p1.first)
            return -1;
        else
            return 1;
    }
}


void Asta::InserisciPartecipante(Persona* p) {
    if (CercaPersona(p) != -1)
        throw invalid_argument("Partecipante gia' presente.");
    if (!Maggiorenne(p->DataNascita(), d_inizio))
        throw invalid_argument("Partecipante minorenne");
    partecipanti.push_back(p);
}   

void Asta::InserisciOggetto(Oggetto* ogg) {
    if(CercaOggetto(ogg) == -1)
        oggetti.push_back(make_pair(ogg,false));
}

void Asta::RegistraOfferta(Persona* p, Oggetto* ogg, Data d, Orario o, unsigned v) {
    if(CercaPersona(p) == -1)
        throw invalid_argument("Partecipante non trovato");
    if(CercaOggetto(ogg) == -1)
        throw invalid_argument("Oggetto non trovato");
    if(EstAggiudicato(ogg))
        throw invalid_argument("Oggetto gia' aggiudicato");

    if (d < d_inizio || d > d_fine)
        throw invalid_argument("Data non valida");
    
    int i_ultima_offerta = CercaUltimaOfferta(ogg);


    if(i_ultima_offerta == -1) {
        if (v < ogg->BaseAsta())
            throw invalid_argument("Offerta troppo bassa.");
        else
            offerte.push_back(Offerta(p, ogg, d, o, v));
    } else {
        if(ConfrontaOrari(make_pair(d,o), make_pair(offerte[i_ultima_offerta].data, offerte[i_ultima_offerta].orario )) == 1)
        throw invalid_argument("Orario non valido");
        
        if(offerte[i_ultima_offerta].valore < v)
        offerte.push_back(Offerta(p, ogg, d, o, v));
    }

}

bool Asta::AggiudicaOggetto(Oggetto* ogg) {
    if(CercaOggetto(ogg) == -1)
        throw invalid_argument("Oggetto non trovato");
    cout << "Sono qui" << endl;
    if(EstAggiudicato(ogg))
        throw invalid_argument("Oggetto gia' aggiudicato");
    cout << "Sono qui" << endl;
    int i_ultima_offerta = CercaUltimaOfferta(ogg);

    if(i_ultima_offerta == -1){
        oggetti.erase(oggetti.begin() + CercaOggetto(ogg));
        return false;
    } else {
        aggiudicazioni.push_back(Aggiudicazione(offerte[i_ultima_offerta].persona,
                                                offerte[i_ultima_offerta].oggetto,
                                                offerte[i_ultima_offerta].valore,
                                                offerte[i_ultima_offerta].data));
        while(CercaUltimaOfferta(ogg) != -1){
            offerte.erase(offerte.begin() + CercaUltimaOfferta(ogg));
            oggetti[CercaOggetto(ogg)].second = true;
        }
        return true;
    }
}

int Asta::CercaUltimaOfferta(Oggetto* ogg) {
    unsigned v_max = 0;
    int i_u = -1;
    cout << offerte.size();
    for(int i = 0; i < offerte.size(); i++) {
        if(offerte[i].oggetto == ogg) {
            cout << offerte[i].valore<<endl;
            if(offerte[i].valore > v_max)
            v_max = offerte[i].valore;
            i_u = i;
        }
    }
    return i_u;
}

int Asta::CercaOggetto(Oggetto* ogg) {
    for(long unsigned i = 0; i < oggetti.size(); i++) {
        if (oggetti[i].first == ogg)
            return i;
    }
    return -1;
}

int Asta::CercaPersona(Persona* p) {
    for(long unsigned int i = 0; i < partecipanti.size(); i++) {
        if (partecipanti[i] == p)
            return i;
    }
    return -1;
}

int Asta::CercaPartecipante(Persona* p) {
    for(long unsigned i = 0; i < offerte.size(); i++) {
        if(offerte[i].persona == p)
            return i;
    }
    return -1;
}

ostream& operator<<(ostream& os, const Asta& a) {
    cout << "Asta " << a.d_inizio << " " << a.d_fine << endl;
    
    cout << "Partecipanti: " << endl;
    for (unsigned i = 0; i< a.partecipanti.size(); i++)
        cout << *a.partecipanti[i] << endl;

    cout << endl; 

    cout << "Oggetti: " << endl;
    for(unsigned j = 0; j < a.oggetti.size(); j++)
        cout << *a.oggetti[j].first << endl;

    cout << endl; 
    
    cout << "Offerte: " << endl;
    for(unsigned k = 0; k < a.offerte.size(); k++)
        cout << a.offerte[k] << endl;
    
    cout << endl; 

    cout << "Aggiudicazioni: " << endl;
    for(unsigned l = 0; l < a.aggiudicazioni.size(); l++ )
        cout << a.aggiudicazioni[l] << endl;

    cout << endl; 

    return os;
}




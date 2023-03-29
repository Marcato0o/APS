// File DriverAsta.cpp
#include <iostream>
#include "Asta.hpp"
#include "vector"
#include "Persona.hpp"


using namespace std;

int CercaPartecipante(vector<pair<Persona*, int>> v, Persona* p);
Persona* MigliorPartecipante(const Asta& a);

int main() {
    Persona p1("Giovanni", Data(13,02,1998)), p2("Mario", Data(25,9,1997)), p3("Matteo", Data(7,8,2002));
    Oggetto o1("Quadro", 350), o2("Reperto Antico", 560), o3("Orologio", 1500), o4("Altro Orologio", 1200), o5("Televisore", 1000); 
    Asta asta_di_beneficenza(Data(30,1,2023), Data(6,2,2023));

    asta_di_beneficenza.InserisciPartecipante(&p1);
    asta_di_beneficenza.InserisciPartecipante(&p2);
    asta_di_beneficenza.InserisciPartecipante(&p3);

    asta_di_beneficenza.InserisciOggetto(&o1);
    asta_di_beneficenza.InserisciOggetto(&o2);
    asta_di_beneficenza.InserisciOggetto(&o3);
    asta_di_beneficenza.InserisciOggetto(&o4);
    asta_di_beneficenza.InserisciOggetto(&o5);

    /*asta_di_beneficenza.RegistraOfferta(&p1, &o1, Data(31,1,2023), Orario(13,26), 352);
    asta_di_beneficenza.RegistraOfferta(&p2, &o1, Data(31,1,2023), Orario(13,28), 351);
    asta_di_beneficenza.RegistraOfferta(&p3, &o1, Data(31,1,2023), Orario(13,27), 357);
    asta_di_beneficenza.RegistraOfferta(&p3, &o2, Data(31,1,2023), Orario(15,34), 700);
    asta_di_beneficenza.RegistraOfferta(&p1, &o2, Data(1,2,2023), Orario(12,57), 770);
    asta_di_beneficenza.AggiudicaOggetto(&o1);*/

    asta_di_beneficenza.RegistraOfferta(&p1, &o1, Data(31,1,2023), Orario(9,15), 360);
    asta_di_beneficenza.RegistraOfferta(&p1, &o2, Data(1,2,2023), Orario(12,45), 580);
    asta_di_beneficenza.RegistraOfferta(&p2, &o3, Data(2,2,2023), Orario(14,30), 1600);
    asta_di_beneficenza.RegistraOfferta(&p2, &o4, Data(3,2,2023), Orario(20,34), 1300);

    asta_di_beneficenza.RegistraOfferta(&p1, &o5, Data(31,1,2023), Orario(13,28), 1200);
    asta_di_beneficenza.RegistraOfferta(&p2, &o5, Data(31,1,2023), Orario(13,29), 1373);
    asta_di_beneficenza.RegistraOfferta(&p3, &o5, Data(31,1,2023), Orario(13,31), 1375);
    asta_di_beneficenza.RegistraOfferta(&p1, &o5, Data(31,1,2023), Orario(13,40), 1800);
 

    asta_di_beneficenza.AggiudicaOggetto(&o1);
    asta_di_beneficenza.AggiudicaOggetto(&o2);
    asta_di_beneficenza.AggiudicaOggetto(&o3);
    asta_di_beneficenza.AggiudicaOggetto(&o4);


    cout << asta_di_beneficenza;

    Persona* migliore = MigliorPartecipante(asta_di_beneficenza);
    if (migliore != nullptr)
        cout << "Il miglior partecipante e': " << *migliore << endl; 
}

Persona* MigliorPartecipante(const Asta& a) {
    vector<pair<Persona*,int>> v_ass;
    vector<pair<Persona*,int>> v_off;
    int i,j;
    double max_rapp;
    int i_max;

    for(i = 0; i < a.NAggiudicazioni(); i++) {
        j= CercaPartecipante(v_ass, a.Vincitore(i));
        if(j == -1)
            v_ass.push_back(make_pair(a.Vincitore(i), 1));
        else
            v_ass[j].second++;
    }

    for(i = 0; i < a.NOfferte(); i++) {
        j = CercaPartecipante(v_off, a.Offerente(i));
        if(j == -1)
            v_off.push_back(make_pair(a.Offerente(i), 1));
        else
            v_off[j].second++;
    }

    for(i=0; i < v_ass.size(); i++) {
        for(j=0; j < v_off.size(); j++) {
            if(v_ass[i].first == v_off[j].first) {
                if(v_ass[i].second / v_off[i].second > max_rapp) {
                    i_max = i;
                    max_rapp = v_ass[i].second / v_off[i].second;
                }
            }    
        }
    } 
    if(i_max != -1) 
        return v_ass[i_max].first;
    else    
        return nullptr;
}

int CercaPartecipante(vector<pair<Persona*, int>> v, Persona* p) {
    for(int i = 0; i<v.size(); i++) {
        if(v[i].first == p)
            return i;
    }
    return -1;
}
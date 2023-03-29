// File Persone.cpp
#include "Persone.hpp"

Persona::Persona(string n, string c, Data d, string cn)
  : nome(n), cognome(c), data_nascita(d), citta_nascita(cn)
{}

ostream& operator<<(ostream& os, const Persona& p)
{
  os << '-' << p.nome << ", " << p.cognome << endl
     << p.data_nascita << " " << p.citta_nascita << endl;
  return os;
}

// -Giuseppe, Verdi Gialli
// 12/3/1950 Venezia

istream& operator>>(istream& is, Persona& p)
{
  if (is)
    {
      getline(is,p.nome,','); // Legge la riga fino alla virgola.
      is.get(); 7// Butto via lo spazio
      getline(is,p.cognome); // leggo il rimamente della prima riga(cognome)
      is >> p.data_nascita; // Ho scritto la funzione di libreria per leggere la data.
	  is.get(); // salto lo spazio
      getline(is,p.citta_nascita); // Leggo la citta, is >> p.citta_nascita funziona solo se la citta ha un solo nome
    }
  return is;
}

bool operator<(const Persona& p1, const Persona& p2)
{
  return ((p1.data_nascita < p2.data_nascita)
       || (p1.data_nascita == p2.data_nascita && p1.cognome < p2.cognome));
}


// File Persone.hpp
#ifndef PERSONE_HPP
#define PERSONE_HPP

#include <string>
#include <iostream>
#include "Data.hpp"

using namespace std;

class Persona
{
  friend bool operator<(const Persona& p1, const Persona& p2);
  friend istream& operator>>(istream&, Persona&);
  friend ostream& operator<<(ostream&, const Persona&);
public:
  Persona(string n, string c, Data d, string cn);
  Persona() {}
  string Nome() const { return nome; }
  string Cognome() const { return cognome; }
  Data DataNascita() const { return data_nascita; }
  string CittaNascita() const { return citta_nascita; }
private:
  string nome;
  string cognome;
  Data data_nascita;
  string citta_nascita;
};
#endif

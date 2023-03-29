// File ManipolaDate.cpp
#include <iostream>
#include "ManipolaDate.hpp"

int main()
{
  unsigned g1, m1, a1;

  do
    {
      cout << "Inserisci la data (giorno, mese ed anno): ";
      cin >> g1 >> m1 >> a1;
    }
  while (!DataValida(g1,m1,a1));

  cout << "La data precedente al ";
  StampaData(g1,m1,a1);
  cout << " e' il ";
  DataPrecedente(g1,m1,a1); 
  PrintDate(g1,m1,a1);
  cout << endl;
}

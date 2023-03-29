// File ManipolaDate.hpp
#ifndef MANIPOLA_DATE_HPP
#define MANIPOLA_DATE_HPP

using namespace std;

bool Bisestile(unsigned);
unsigned GiorniDelMese(unsigned, unsigned);
bool DataValida(unsigned, unsigned, unsigned);
void StampaData(unsigned giorno, unsigned mese, unsigned anno);
void DataSuccessiva(unsigned& giorno, unsigned& mese, unsigned& anno);
int ComparaDate(unsigned g1, unsigned m1, unsigned a1, 
		unsigned g2, unsigned m2, unsigned a2);
unsigned DistanzaTraDate(unsigned g1, unsigned m1, unsigned a1, 
			 unsigned g2, unsigned m2, unsigned a2);
int DistanzaTraDateBidirezionale(unsigned g1, unsigned m1, unsigned a1, 
			 unsigned g2, unsigned m2, unsigned a2);
void DataPrecedente(unsigned& giorno, unsigned& mese, unsigned& anno);
void PrintDate(unsigned& giorno, unsigned&mese, unsigned& anno);
#endif

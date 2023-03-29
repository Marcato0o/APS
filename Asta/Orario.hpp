// File Orario.hpp
#ifndef ORARIO_HPP
#define ORARIO_HPP

using namespace std;
#include <iostream>

class Orario
{
	friend ostream& operator<< (ostream& os, const Orario& o);
	friend bool operator< (const Orario& o1, const Orario& o2);
	friend bool operator<= (const Orario& o1, const Orario& o2);
	friend bool operator== (const Orario& o1, const Orario& o2);
	friend int operator- (const Orario& o1, const Orario& o2);  //differenza in minuti
public:
	Orario(unsigned o = 0, unsigned m = 0);
	unsigned Ora() const {return ore;}
	unsigned Minuti() const {return minuti;}
private:
	unsigned ore, minuti;
};

#endif
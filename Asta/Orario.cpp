// File Orario.cpp

using namespace std;
#include <iostream>
#include "Orario.hpp"

Orario::Orario(unsigned o, unsigned m)
{
	ore = o; 
	minuti = m;
}

bool operator< (const Orario& o1, const Orario& o2)
{
	if (o1.ore < o2.ore)
		return true;
	else if (o1.ore == o2.ore && o1.minuti < o2.minuti)
		return true;
	else
		return false;
}
	
bool operator<= (const Orario& o1, const Orario& o2)
{
	if (o1.ore < o2.ore)
		return true;
	else if (o1.ore == o2.ore && o1.minuti <= o2.minuti)
		return true;
	else
		return false;
}
	
bool operator== (const Orario& o1, const Orario& o2)
{
	return (o1.ore == o2.ore && o1.minuti == o2.minuti);
}

int operator- (const Orario& o1, const Orario& o2)  //differenza in minuti
{
	return (static_cast<int>(o1.ore*60 + o1.minuti - o2.ore*60 - o1.minuti));
}

ostream& operator<< (ostream& os, const Orario& o)
{
	os << o.ore << ":" << o.minuti;
	return os;
}

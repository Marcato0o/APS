// File ManipolaDate.cpp
#include <iostream>
#include "ManipolaDate.hpp"

bool DataValida(unsigned giorno, unsigned mese, unsigned anno)
{
  return anno >= 1 && mese >= 1 && mese <= 12 
    && giorno >=1 && giorno <= GiorniDelMese(mese,anno);
}

unsigned GiorniDelMese(unsigned mese, unsigned anno)
{
  if (mese == 4 || mese == 6 || mese == 9 || mese == 11)
    return 30;
  else if (mese == 2)
    if (Bisestile(anno))
      return 29;
    else
      return 28;
  else 
    return 31;
}	 

bool Bisestile(unsigned a)
{
  if (a % 4 != 0)
    return false;
  else if (a % 100 != 0)
    return true;
  else if (a % 400 != 0)
    return false;
  else 
    return true;
}

void DataSuccessiva(unsigned& giorno, unsigned& mese, unsigned& anno)
{ 
  if (giorno < GiorniDelMese(mese,anno))
    giorno++;
  else 
    if (mese < 12)  
      { 
        giorno = 1;
        mese++;
      }
    else
      { 
        giorno = 1;
        mese = 1;
        anno++;
      }
}

void StampaData(unsigned giorno, unsigned mese, unsigned anno)
{
  if (DataValida(giorno,mese,anno))
    {
      cout << giorno << ' ';
      if (mese == 1) cout << "gennaio";
      else if (mese == 2) cout << "febbraio";
      else if (mese == 3) cout << "marzo";
      else if (mese == 4) cout << "aprile";
      else if (mese == 5) cout << "maggio";
      else if (mese == 6) cout << "giugno";
      else if (mese == 7) cout << "luglio";
      else if (mese == 8) cout << "agosto";
      else if (mese == 9) cout << "settembre";
      else if (mese == 10) cout << "ottobre";
      else if (mese == 11) cout << "novembre";
      else cout << "dicembre";
      cout << ", " << anno;
    }
  else
    cout << "Data non valida" << endl;
}

int ComparaDate(unsigned g1, unsigned m1, unsigned a1, 
		unsigned g2, unsigned m2, unsigned a2)
{
  if (a1 < a2)
    return -1;
  else if (a1 == a2 && m1 < m2)
    return -1;
  else if (a1 == a2 && m1 == m2 && g1 < g2)
    return -1;
  else if (a1 == a2 && m1 == m2 && g1 == g2)
    return 0;
  else 
    return 1;
}

void Scambia(unsigned& a, unsigned& b)
{
  unsigned temp = a;
  a = b;
  b = temp;
}

unsigned DistanzaTraDate(unsigned g1, unsigned m1, unsigned a1, 
			 unsigned g2, unsigned m2, unsigned a2)
{
  unsigned i = 0;

  while (ComparaDate(g1,m1,a1,g2,m2,a2) == -1)
    {
      i++;
      DataSuccessiva(g1,m1,a1);
    }
  return i;
}
      
int DistanzaTraDateBidirezionale(unsigned g1, unsigned m1, unsigned a1, 
			 unsigned g2, unsigned m2, unsigned a2)
{
  if (ComparaDate(g1,m1,a1,g2,m2,a2) != 1)
    return DistanzaTraDate(g1,m1,a1,g2,m2,a2);
  else
    return -DistanzaTraDate(g2,m2,a2,g1,m1,a1);
}

void DataPrecedente(unsigned& giorno, unsigned& mese, unsigned& anno)
{
  if (giorno != 1)
    giorno--;
  else 
  {
    if (mese != 1)
    {
      mese--;
      giorno = GiorniDelMese(mese,anno);
    }
    else 
    {
      mese = 12;
      giorno = GiorniDelMese(mese,anno);
      anno--;
    }  
  }     
}

void PrintDate(unsigned& giorno, unsigned&mese, unsigned& anno) {
  if (DataValida(giorno,mese,anno))
    {
      if (mese == 1) cout << "January ";
      else if (mese == 2) cout << "February ";
      else if (mese == 3) cout << "March ";
      else if (mese == 4) cout << "April ";
      else if (mese == 5) cout << "May ";
      else if (mese == 6) cout << "June ";
      else if (mese == 7) cout << "July ";
      else if (mese == 8) cout << "August ";
      else if (mese == 9) cout << "September ";
      else if (mese == 10) cout << "October ";
      else if (mese == 11) cout << "November ";
      else cout << "December ";
      if (giorno == 1 || giorno == 21 || giorno == 31)
        cout << giorno << "st";
      else if (giorno == 2 || giorno == 22)
        cout <<giorno << "nd";
      else if (giorno == 3 || giorno == 23)
        cout << giorno << "rd";
      else
        cout << giorno << "th";
      cout << ", " << anno;
    }
  else
    cout << "Data invalida" << endl;
}



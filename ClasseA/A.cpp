#include "A.hpp"

A::A(unsigned u) 
{ 
  unsigned i;
  size = u;
  p1 = new int[size]; 
  p2 = nullptr; 
  b = true;
  for (i = 0; i < size; i++)
    p1[i] = 0;
}      

// A::A(const A& a)
// {
  // unsigned i;
  // b = a.b;
  // size = a.size;
  // p1 = new int[size];
  // for (i = 0; i < size; i++)
    // p1[i] = a.p1[i];
  // if (a.p2 == nullptr)
    // p2 = nullptr;
  // else
    // {
      // p2 = new int[size];
      // for (i = 0; i < size; i++)
	    // p2[i] = a.p2[i];
    // }
// }
 
// A& A::operator=(const A& a)
// {
  // unsigned i;
  // b = a.b;
  // size = a.size;
  // delete[] p1;
  // delete[] p2; // anche se nullptr
  // p1 = new int[size];
  // for (i = 0; i < size; i++)
    // p1[i] = a.p1[i];
  // if (a.p2 != nullptr)
    // {
      // p2 = new int[size];
      // for (i = 0; i < size; i++)
	    // p2[i] = a.p2[i];
    // }
  // else
    // p2 = nullptr;
  // return *this;
// }

int A::Get(unsigned a) const 
{ if (b) 
    return p1[a];
  else 
    return p2[a]; 
}

void A::Set(unsigned a, int k)
{
  if (b)
    p1[a] = k;
  else
    p2[a] = k;
}

void A::Flip() 
{
  unsigned i;
  b = !b; 
  if (p2 == nullptr)
    {
      p2 = new int[size];
      for (i = 0; i < size; i++)
        p2[i] = 0;
    }
}

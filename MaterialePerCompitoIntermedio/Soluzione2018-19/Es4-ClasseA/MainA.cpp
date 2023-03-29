#include "A.hpp"

int main()
{ A a1; 
  a1.Set(1,8);
  A a2 = a1;
  a2.Set(1,12);
  a1.X();
  a1.Set(2,7);
  cout << a1.Get(1) << " "  << a1.Get(2) << endl;
  return 0; 
}

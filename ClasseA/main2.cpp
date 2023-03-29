#include "A.hpp"
#include <iostream>

using namespace std;


int main()       
{
  A a1(5), a2(5);
  a1.Set(3,-4);
  a1.Set(4,9);
  a2 = a1;
  a2.Set(4,-6);
  a2.Flip();
  cout << a1.Get(4) << ' ' << a2.Get(4) << endl;
  return 0;
}                


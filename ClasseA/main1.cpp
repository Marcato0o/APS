#include "A.hpp"
#include <iostream>

using namespace std;


int main()       
{
  A a1(5);
//   A a2(5,2);
  a1.Set(1,-4);
  a1.Set(2,3);
//   a1.size = 6;
  a1.Flip();
//   a1.Size() = 8;
//   a1(5);
  a1.Set(1,-7);
  a1.Flip();
  cout << a1.Get(1) << endl;
  return 0;
}                


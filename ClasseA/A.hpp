// File a.hpp
#ifndef A_HPP
#define A_HPP

using namespace std;

class A
{
 public:                                       
  A(unsigned u); 
  // A(const A&); 
  // A& operator=(const A&); 

  unsigned Size() const { return size; }
  int Get(unsigned a) const;
  void Set(unsigned a, int k);
  void Flip();
 private: 
  bool b; 
  unsigned size;
  int* p1;                                
  int* p2;                                       
};
#endif

// File Complesso.hpp

#ifndef COMPLESSO_HPP
#define COMPLESSO_HPP 

#include <iostream>
#include <cmath>
using namespace std;

class Complesso {
    friend ostream& operator<<(ostream& os, const Complesso& c);
    friend istream& operator>>(istream& is, Complesso& c);
    public:
        Complesso(double c_re  = 0, double c_imm = 0) { re = c_re, imm = c_imm;}
        double Re() { return re; }
        double Imm() { return imm; }
        double Modulo() { return sqrt(re*re + imm*imm);}
        double Fase() { if (imm >= 0) return acos(re/Modulo());
                         else return -acos(re/Modulo());}
    private:
        double re;
        double imm; 
};
#endif
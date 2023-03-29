// File Poli.hpp
#ifndef POLI_HPP
#define POLI_HPP

using namespace std;

class Polinomio {
    friend Polinomio operator+(const Polinomio& p1, const Polinomio& p2);
    friend Polinomio operator-(const Polinomio& p1, const Polinomio& p2);
    friend ostream& operator<<(ostream& os, const Polinomio& p);
    friend istream& operator>>(istream& is, Polinomio& p);
    friend Polinomio operator*(const Polinomio& p1, const Polinomio&p2);
    public:
        Polinomio();
        Polinomio(double coeff, unsigned exp);
        Polinomio(const Polinomio& p);
        double Coeff (unsigned exp) const;
        double operator()(const double& punto);
        

    private: 
        double *vet;
        unsigned dim; 
};

#endif
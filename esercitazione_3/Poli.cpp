#include <iostream>
#include <iomanip>
#include <cmath>
#include "Poli.hpp"


using namespace std;

Polinomio::Polinomio() {
    dim = 1;
    vet = new double[dim];
    vet[0] = 0;
}

Polinomio::Polinomio(double coeff, unsigned exp) {
    dim = exp + 1;
    vet = new double[dim];
    vet[exp] = coeff;

    for(unsigned i = 0; i < exp-1; i++) {
        vet[i] = 0;
    }
}

Polinomio::Polinomio(const Polinomio& p) {
    dim = p.dim;
    vet = new double [dim];

    for(unsigned i = 0; i < dim; i++) {
        vet[i] = p.vet[i];
    }
}

double Polinomio::Coeff(unsigned exp) const {
    if ( exp >= dim ) {
        return 0.0;
    }
    return vet[exp];

}

Polinomio operator+(const Polinomio& p1, const Polinomio& p2) {
    int dim_max = max(p1.dim, p2.dim);
    Polinomio somma(0.0, dim_max);

    for(int i = 0; i < dim_max-1; i++)
        somma.vet[i] = p1.Coeff(i) + p2.Coeff(i);
    
    return somma;
}

Polinomio operator-(const Polinomio& p1, const Polinomio& p2) {
    int dim_max = max(p1.dim, p2.dim);
    Polinomio diff(0.0, dim_max);

    for(int i = 0; i < dim_max-1; i++) 
        diff.vet[i] = p1.Coeff(i) - p2.Coeff(i);

    return diff;
}

ostream& operator<<(ostream& os, const Polinomio& p) {
    
    unsigned i = p.dim - 1;
    os << "<";

    while (i > 0){ 
        os << p.vet[i] << "x^" << i << " + ";
        i--;
    }
    os << p.vet[0] << "x^0>";
    return os;
}

istream& operator>>(istream& is, Polinomio& p) {
    char ch;
    double coeff;
    unsigned grado;

    is >> ch >> coeff >> ch >> ch >> grado >> ch;

    if (grado + 1 > p.dim) {
        delete[] p.vet;
        p.dim = grado + 1;
        p.vet = new double[grado +1];
    }
    p.vet[grado] = coeff;
    int i = grado - 1;

    while( i >= 0) {
        is >> coeff >> ch >> ch >> grado >> ch;
        
        if (grado == i) {
            p.vet[i] = coeff;
        }  
        else {
            p.vet[i] = 0.0;
        }
        i--;
        
    }    
    return is;
}

double Polinomio::operator()(const double& punto) {
    double val;
    for(unsigned i = 0; i < dim; i++) {
        val += vet[i] * std::pow(punto, i);  
    }
    return val;
}

Polinomio operator*(const Polinomio& p1, const Polinomio&p2) {
    int exp = (p1.dim -1) + (p2.dim -1);
    Polinomio prodotto(0, exp);

    for(unsigned i = 0; i < p1.dim; i++) {
        for(unsigned j = 0; j < p2.dim; j++) {
            prodotto.vet[i + j] += p1.Coeff(i) * p2.Coeff(j);
        }
    }

    return prodotto;    
}
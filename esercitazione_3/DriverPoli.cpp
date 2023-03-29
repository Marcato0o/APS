// File DriverPoli.cpp
#include <iostream>
#include "Poli.hpp"

using namespace std;

int main() {
    Polinomio p1;
    Polinomio p2;
    Polinomio p3;
    double punto;
    cout << "Inserisci p1: ";
    cin >> p1;
    cout << "Inserisci p2: ";
    cin >> p2;
    
    cout << "Prodotto: " << p1 * p2 << endl;
    cout << "Differenza: " << p1 - p2 << endl;
    
    cout << "Verifica corretta copia profonda:" << endl;
    p2 = p1;
    cout << p2 << endl;

    cout << "Valore polinomio in un punto: "<< endl;
    cout << "Inserisci il polinomio: ";
    cin >> p3;
    cout << "Inserisci un punto: ";
    cin >> punto;

    cout << p3(punto);

    return 0;
}

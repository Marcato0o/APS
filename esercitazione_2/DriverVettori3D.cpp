#include <iostream>
#include <iomanip>
#include "Vettori3D.hpp"

using namespace std;

int main() {
    Vettore3D v1;
    Vettore3D v2;
  
    Vettore3D somma_vet;
    Vettore3D prod_vet;
    double prod_scal;

    cout << "Inserisci il vettore 1 (x y z): ";
    cin >> v1;
    cout << "Inserisci il vettore 2 (x y z): ";
    cin >> v2;

    somma_vet = v1 + v2;  
    prod_vet = v1 & v2;
    prod_scal = v1 * v2;

    cout << "Somma vettoriale: " << somma_vet << endl;
    cout << "Prodotto vettoriale: " << prod_vet << endl;
    cout << "Prodotto scalare: " << prod_scal << endl;
}


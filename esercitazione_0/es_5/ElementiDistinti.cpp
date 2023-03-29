#include <iostream>
#include "ElementiDistinti.hpp"

using namespace std;

int NumeroDistintiVettore(int v[], int n) {
    int i;
    int k = 0; 
    int numero_corrente;
    int distinti[n];
    unsigned contatore_distinti = 0;

    for(i = 0; i < n; i++) {
        numero_corrente = v[i];

        if (!CercaInVettore(distinti, numero_corrente, n)) {
            contatore_distinti++;
            distinti[k] = numero_corrente;
            k++;
        }

    }
    return contatore_distinti;
}

bool CercaInVettore(int distinti[], int numero_corrente, int n) {
    int i;
    for(i = 0; i < n; i++) {
        if (numero_corrente == distinti[i])
            return 1;   
    }
    return 0;
}


// int NumeroDistintiMatrice(int m[][NUM_COL], int righe, int col) {
//     cout << "si";
// }
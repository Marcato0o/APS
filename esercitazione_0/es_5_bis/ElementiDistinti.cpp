#include <iostream>
#include "ElementiDistinti.hpp"

using namespace std;

int NumeroDistintiVettore(int v[], int n) {
    int i;
    int numero_corrente;
 
    unsigned contatore_distinti = 0;

    for(i = 0; i < n; i++) {
        numero_corrente = v[i];

        if (!CercaInPrecedenti(i, v, numero_corrente)) {
            contatore_distinti++;
        }
    }
    return contatore_distinti;
}

bool CercaInPrecedentiVec(int p, int v[], int numero_corrente) {
    int i;
    for(i = 0; i < p; i++) {
        if (v[i] == numero_corrente)
            return 1;   
    }
    return 0;
}


int NumeroDistintiMatrice(int m[][NUM_COL], int righe, int col) {
    
}

bool CercaInPrecedentiMat(int p, int v[], int numero_corrente) {
    int i;
    for(i = 0; i < p; i++) {
        if (v[i] == numero_corrente)
            return 1;   
    }
    return 0;
}
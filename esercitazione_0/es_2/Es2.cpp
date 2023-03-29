#include <iostream>
#include "Es2.hpp"

using namespace std;

void StampaRighe(int n) {
    const unsigned dim = 8;
    int* v;
    int i,j,k;
    v = new int[dim];
    InizializzaVettore(v, dim);

    for(i = 0; i < n; i++) { 
        
        RiempiVettore(v, i);

        for(j = 0; j < 8; j++) {
            if (v[j] == 0)
                cout << " "; 
            else
                cout << v[j];
        }
             
        cout << i+1;  

        for(k = 7; k > -1; k--){
            if (v[k] == 0)
                cout << " "; 
            else
                cout << v[k];
        }  
        cout << endl;
    }

    delete[] v;
}

void RiempiVettore(int* v, unsigned p) {
    unsigned i;

    for(i = 8-p; i < 8;i++) {
        v[i] = v[i] + 1;
    }
}

void InizializzaVettore(int* v, unsigned n) {
    int i;
    for(i = 0; i < 8; i++)
    {   
        v[i] = 0;
    }
}


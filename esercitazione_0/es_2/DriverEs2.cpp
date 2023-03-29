#include <iostream>
#include "Es2.hpp"

using namespace std;

int main() {
    int n;

    do {
        cout << "Inserisci il numero delle righe da stampare: ";
        cin >> n;
    } while(n>9 && n<1);
    
    StampaRighe(n);
}
#include <iostream>
#include "Es4.hpp"
#include <cmath>

using namespace std;

int main() {
    double n;
    double x = 1;
    do {
        cout << "Inserisci un numero: ";
        cin >> n;
    } while(n < 0);

    cout << "Newton: " << CalcolaRadice(n,x) << ", Metodo normale: " << sqrt(n) << endl;
    return 0;
}


#include <iostream>
#include "Es1.hpp"

using namespace std;

int main() {
    unsigned num;

    do
    {
      cout << "Inserisci un numero > di 0: ";
      cin >> num;
    }
    while(num < 0);


    if (numero_primo(num))
        cout << "Il numero " << num << " e' primo" << endl;
    else
        cout << "Il numero " << num << " non e' primo" << endl;

    return 0;
}
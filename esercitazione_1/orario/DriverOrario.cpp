#include <iostream>
#include "Orario.hpp"

using namespace std;

int main() {
    unsigned ore;
    unsigned minuti;
    unsigned secondi;
    unsigned secondi_da_sommare;

    Orario orario;
    Orario orario_personalizzato;

    cout << "L'orario attuale e': " << orario.Ora() << ":" << orario.Minuti() << ":" << orario.Secondi() << endl;

    cout << "Inserisci l'orario desiderato(0 per ora attuale): ";
    cin >> ore >> minuti >> secondi;

    new(&orario) Orario(ore, minuti, secondi);

    cout << "Inserisci i secondi da sommare: ";
    cin >> secondi_da_sommare;
    orario_personalizzato.SommaSecondi(secondi_da_sommare); 
    return 0;
}
#include <iostream>
#include "Orario.hpp"

using namespace std;

void Orario::SommaSecondi(unsigned s){
    if ((secondi + s) > 86400) {
        secondi = secondi + s - 86400; 
    } else {
        secondi += s;
    }
}
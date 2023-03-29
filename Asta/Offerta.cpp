// File offerta.cpp
#include <iostream>
#include "Offerta.hpp"

ostream& operator<<(ostream& os, const Offerta& o) {
    cout << *(o.persona) << " ha puntato " << o.valore << " per " << *o.oggetto << " il " << o.data << " alle " << o.orario;
    return os;
}

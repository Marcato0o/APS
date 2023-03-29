// File Aggiudicazione.cpp
#include <iostream>
#include "Aggiudicazione.hpp"

ostream& operator<<(ostream& os, const Aggiudicazione& a) {
    cout << *a.persona << " si e' aggiudicato " << *a.oggetto << " per " << a.prezzo << " il " << a.data;
    return os;
}
#include <iostream>
#include "Es1.hpp"

using namespace std;

bool numero_primo(unsigned num) {
    unsigned div = 2;

    if (num == 1 || num == 2)
        return true;

    while(div < num) {

        if(num%div == 0)
        {
            // cout << "res = " << num%div << " - " << div << endl; DEBUG
            return false;
        }
        div++;
    
    }

    return true;
}
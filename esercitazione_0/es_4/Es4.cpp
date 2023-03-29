#include <iostream>
#include "Es4.hpp"

using namespace std;


double CalcolaRadice(double n, double x) {
    double x_prec = 0;
    while(abs(x_prec - x) > 0.0001){
        x_prec = x;
        x = (x + n/x) / 2;
    }

    return x;
}


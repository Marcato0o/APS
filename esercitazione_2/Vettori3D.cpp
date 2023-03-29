#include <iostream>
#include "Vettori3D.hpp"

using namespace std;

Vettore3D operator+(const Vettore3D& v1, const Vettore3D& v2) {
    return Vettore3D(   v1.X() + v2.X(),
                        v1.Y() + v2.Y(),
                        v1.Z() + v2.Z() );
}

Vettore3D operator&(const Vettore3D& v1, const Vettore3D& v2) {
    return Vettore3D(   v1.Y()*v2.Z() - v1.Z()*v2.Y(),
                        v1.Z()*v2.X() - v1.X()*v2.Z(),
                        v1.X()*v2.Y() - v1.Y()*v2.X() );
}

double operator*(const Vettore3D& v1, const Vettore3D& v2) {
    return v1.X()*v2.X() + v1.Y()*v2.Y() + v1.Z()*v2.Z();
}

ostream& operator<<(ostream& os, const Vettore3D& v) {
    os << "x:" << v.X() << " y:" << v.Y() << " z:" << v.Z();
    return os;
}

istream& operator>>(istream& is, Vettore3D& v) {
    is >> v.x >> v.y >> v.z;
    return is;
}
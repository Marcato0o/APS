// File ContoCorrente.hpp
#ifndef CONTO_CORRENTE_HPP
#define CONTO_CORRRENTE_HPP

using namespace std;

class Vettore3D {
    // Overloading for sum, cross product and scalar product.
    friend Vettore3D operator+(const Vettore3D& v1, const Vettore3D& v2); 
    friend Vettore3D operator&(const Vettore3D& v1, const Vettore3D& v2); 
    friend double operator*(const Vettore3D& v1, const Vettore3D& v2);
    // Overloading for iostream.
    friend ostream& operator<<(ostream& os, const Vettore3D& v);
    friend istream& operator>>(istream& is, Vettore3D& v);

    public:
        // Constructors.
        Vettore3D(double c_x, double c_y, double c_z) { x = c_x, y = c_y, z = c_z; };
        Vettore3D(double c_x, double c_y) { x = c_x, y = c_y; };
        Vettore3D() { x = 0.0, y = 0.0, z = 0.0; };
        // Getters.
        double X() const { return x; }
        double Y() const { return y; }
        double Z() const { return z; }   
    private: 
        double x;
        double y;
        double z;
};

#endif
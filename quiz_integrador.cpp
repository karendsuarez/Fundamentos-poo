#include <iostream>
#include <string>

class base {

public:
    std::string Producto;
    double Precio;
    int Cant;

    void Descuebto (double Des) {

    }



};


int main () {

    base Producto;
    base Precio;
    base Cant;

    std::cout << "Ingrese el nombre del producto: ";
    std::istream >> Producto;

    std::cout << "Ingrese el precio del producto: ";
    std::istream >> Precio;

    std::cout << "Ingrese la cantidad: ";
    std::istream >> Cant;

    return 0;
}
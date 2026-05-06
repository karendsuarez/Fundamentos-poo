#include <iostream>
#include <string>

class Coche {
private:
    //Atributos
    std::string Fabricante
    int Cilindraje;
    int Potencia;
    std::string Color;
    double Precio;

public:
    //Métodos
    void Encender () {
        std::cout << "El coche esta encendido." << std::endl;
    }

    void Acelerar () {
        std::cout << "El coche esta en marcha." << std::endl;
    }

    void frenar () {
        std::cout << "El coche frenó." << std::endl; 
    }

    void girar () {
        std::cout << "El coche giró." << std::endl;
    }

};

//Funcion principal
int main () {

    Coche c_Jose;
    Coche c_Maria;

    c_Jose.encender ();




    return 0;
}


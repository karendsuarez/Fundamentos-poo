#include <iostream>

class Vehiculo {

private:
    int Modelo;

public:
    void setModelo (int modelo) {
        this -> Modelo = modelo < 2000 || modelo > 2000 ? 2000 : modelo;
    }

    void getModelo (){
        std::cout << "El vehiculo es modelo " << this-> Modelo << std::endl;
    }

}

int main () {

    Vehiculo VehiculoJuan;



}
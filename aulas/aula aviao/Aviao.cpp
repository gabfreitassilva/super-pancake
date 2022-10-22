#include <iostream>
#include "Aviao.h"

using std::string;
using std::cout;

void Aviao::talvezFunciona(int modelo) {
    switch (modelo) {
        case 1:
            setModelo(100, "Planador");
            break;
        case 2:
            setModelo(200, "Monomotor");
            break;
        case 3:
            setModelo(300, "Jato");
            break;
    }
}

void Aviao::setModelo(int maxSpeed, string tipo) {
    this->maxSpeed = maxSpeed;
    this->tipo = tipo;
}

void Aviao::getModelo(void) {
    cout << "Aviao tipo: " << tipo << '\n';
    cout << "Velocidade maxima " << maxSpeed << '\n';
}
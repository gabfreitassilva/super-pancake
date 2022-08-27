// invertendo valores de variaveis (positivo para negativo)

#include <iostream>

int main() {

    int numero = 10;

    std::cout << numero << '\n';
    
    //numero = numero*-1;
    numero =- numero;

    std::cout << numero << '\n';
    //std::cout << -numero << '\n'; // tambem posso inverter na hora de apresentar o valor, porem não estarei atribuindo o valor invertido na variavel

    return 0;
}
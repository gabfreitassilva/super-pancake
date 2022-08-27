// aula de Incremento, Decremento, pré incremento e pós incremento

#include <iostream>

int main() {
    int numero = 0;

    std::cout << "Incremento:" << '\n';
    std::cout << numero << '\n';
    //numero = numero+1;
    //numero += 1;
    numero++;
    std::cout << numero << '\n';
    std::cout << "---------------------" << '\n';

    std::cout << "Decremento:" << '\n';
    std::cout << numero << '\n';
    //numero = numero-1;
    //numero -= 1;
    numero--;
    std::cout << numero << '\n';
    std::cout << "---------------------" << '\n';
   
    std::cout << "Pre Incremento:" << '\n';
    std::cout << numero++ << '\n';
    std::cout << ++numero << '\n';
    std::cout << "---------------------" << '\n';

    std::cout << "Pos Decremento:" << '\n';
    std::cout << --numero << '\n';
    std::cout << numero-- << '\n';
    std::cout << "---------------------" << '\n';
    
    return 0;
}
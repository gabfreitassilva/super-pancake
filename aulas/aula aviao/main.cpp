#include <iostream>
#include "Aviao.h"

using std::cout;
using std::cin;

int main() {
    int modelo;
    
    Aviao entrada;
    
    cout << "[ 1 ] Planador \n[ 2 ] Monomotor \n[ 3 ] Jato \n";
    cout << "Digite o modelo desejado: ";
    cin >> modelo;
    entrada.talvezFunciona(modelo);
    
    if (modelo > 3) {
        cout << "O modelo nao existe.";
    } else {
        entrada.getModelo();
    }
    
    return 0;
}
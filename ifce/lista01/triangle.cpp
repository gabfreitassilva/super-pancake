#include <iostream>

using std::cout;
using std::cin;

int main() {
    double valor_1, valor_2, valor_3;

    cout << "informe tres valores: ";
    cin >> valor_1 >> valor_2 >> valor_3;

    if (valor_1 > 0 && valor_2 > 0 && valor_3 > 0) { // checa se os valores digitados são positivos
        if (valor_1 < valor_2+valor_3 && valor_2 < valor_1+valor_3 && valor_3 < valor_1+valor_2) { // checagem da existência para o triangulo
            cout << "Os valores informados podem formar um trianuglo." << '\n';
            if (valor_1 == valor_2 && valor_2 == valor_3) {
                cout << "Forma um triangulo equilatero." << '\n';
            }
            else if (valor_1 != valor_2 ) {

            }
        }
        else {
            cout << "Os valores informados nao podem formar um triangulo." << '\n';
        }
    }
    else {
        cout << "Foi digitado ao menos UM valor negativo, logo nao se pode formar um triangulo." << '\n';
    }
    return 0;
}
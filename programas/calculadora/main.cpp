#include <iostream>

using std::cout;
using std::cin;

class Calculadora {
    private:

    public:
        void displayOpeartion(char op, double x, double y) {
            switch(op) {
                case '+':
                    cout << "O resultado da soma e de " << x + y << '\n';
                    break;

                case '-':
                    cout << "O resultado da subtracao e de " << x - y << '\n';
                    break;

                case '*':
                    cout << "O resultado da multiplicacao e de " << x * y << '\n';
                    break;

                case '/':
                    cout << "O resultado da divisao e de " << x / y << '\n';
                    break;

                default:
                    cout << "Operacao invalida!\n";
                    break;
            }
        }
    
};

int main() {
    double x, y;
    char operation;
    Calculadora exibir;

    cout << "Bem-vindo a CALCULADORA++\n";

    cout << "Escolha uma das operacoes (- + * /): ";
    cin >> operation;
    
    cout << "Entre com o primeiro valor: ";
    cin >> x;
    cout << "Entre com o segundo valor: ";
    cin >> y;

    exibir.displayOpeartion(operation, x, y);

    return 0;
}
#include <iostream>

using std::cout;
using std::cin;

int sum(int x, int y) {
    return x + y;
}

int subtraction(int x, int y) {
    return x - y;
}

int multiplication(int x, int y) {
    return x * y;
}

double division(double x, double y) {
    return x / y;
}

int main() {
    double x, y;
    int operation;

    cout << '\n' << "|-----------------------------------------------------------------------|" << '\n';
    isAgain: {
        cout << "\n[ 1 ] Multiplicacao \n[ 2 ] Soma \n[ 3 ] Divisao \n[ 4 ] Subtracao\n";
        cout << "Entre com a operacao desejada: ";
        cin >> operation;
    }
    
    cout << "|-----------------------------------------------------------------------|" << '\n';
    switch (operation) {
        case 2:
            cout << "Operacao escolhida: SOMA\n";
            cout << "Digite o primeiro valor: ";
            cin >> x;
            cout << "Digite o segundo valor: ";
            cin >> y;
            cout << "A soma entre " << x << " e " << y << " equivale a: " << sum(x, y) << '\n';
            cout << "|-----------------------------------------------------------------------|" << '\n';
            break;
        
        case 4:
            cout << "Operacao escolhida: SUBTRACAO\n";
            cout << "Digite o primeiro valor: ";
            cin >> x;
            cout << "Digite o segundo valor: ";
            cin >> y;
            cout << "A subtracao entre " << x << " e " << y << " equivale a: " << subtraction(x, y) << '\n';
            cout << "|-----------------------------------------------------------------------|" << '\n';
            break;

        case 1:
            cout << "Operacao escolhida: MULTIPLICACAO\n";
            cout << "Digite o primeiro valor: ";
            cin >> x;
            cout << "Digite o segundo valor: ";
            cin >> y;
            cout << "A multiplicacao de " << x << " por " << y << " equivale a: " << multiplication(x, y) << '\n';
            cout << "|-----------------------------------------------------------------------|" << '\n';
            break;

        case 3:
            cout << "Operacao escolhida: DIVISAO\n";
            cout << "Digite o dividendo: ";
            cin >> x;
            cout << "Digite o divisor: ";
            cin >> y;
            cout << "A divisao de " << x << " por " << y << " equivale a: " << division(x, y) << '\n';
            cout << "|-----------------------------------------------------------------------|" << '\n';
            break;

        default:
            cout << "Opcao invalida!\n";
            cout << "Digite apenas uma das operacoes que foram informadas.\n";
            goto isAgain;
            break;
    }

    cout << "\n[ 1 ] Sim \n[ 0 ] Nao" << '\n';
    cout << "Deseja fazer outra operacao? ";
    cin >> operation;
    if (operation == 1) {
        goto isAgain;
    } else {
        cout << "Programa finalizado!\n";
        cout << "|-----------------------------------------------------------------------|" << '\n';
    }

    return 0;
}
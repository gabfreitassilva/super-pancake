#include <iostream>

using std::cout;
using std::cin;

int main() {
    char unidadeTemperatura;
    double temperatura;

    cout << "Conversor de Temperatura\n";

    cout << "C - Celsius \nF - Fahrenheit\n";
    cout << "De qual unidade deseja converter: ";
    cin >> unidadeTemperatura;

    cout << "Digite o valor da temperatura: ";
    cin >> temperatura;

    if (unidadeTemperatura == 'C' || unidadeTemperatura == 'c') {
        temperatura = (1.8 * temperatura) + 32.0;
        cout << "O valor da tempuratura e de " << temperatura << "F\n";
    } else if (unidadeTemperatura == 'F' || unidadeTemperatura == 'f') {
        temperatura = (temperatura - 32) / 1.8;
        cout << "O valor da temperatura e de " << temperatura << "C\n";
    }

    return 0;
}
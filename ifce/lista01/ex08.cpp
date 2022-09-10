#include <iostream>

using std::cout;
using std::cin;

int main() {
    int hora, minuto, segundo, aux;

    cout << "OBS.: horas minutos e segundos separados por espaco.\n";
    cout << "Informe o primeiro tempo HH:MM:SS> ";
    cin >> hora >> minuto >> segundo;
    aux = (hora * 3600) + (minuto * 60) + segundo; // guardando o tempo em segundos

    cout << "Informe o segundo tempo HH:MM:SS> ";
    cin >> hora >> minuto >> segundo;
    aux -= (hora * 3600) + (minuto * 60) + segundo; // diferença entre os tempos

    hora = aux / 3600; // segundo para hora
    minuto = (aux % 3600) / 60; // segundo para minuto
    segundo = (aux % 3600) % 60; // segundo restante

    cout << "Diferenca de tempo " << abs(hora) << "h" << abs(minuto) << "m" << abs(segundo) << "s" << '\n'; // abs() serve para mostra sempre um valor positivo

    return 0;
}
#include <iostream>

using std::cout;
using std::cin;

struct tempo {
    int hora, minuto;
    void horaMinuto(int minuto);
};

void tempo::horaMinuto(int minuto) {
    hora = (minuto / 60);
    minuto = (minuto % 60);
    cout << hora << "h" << minuto << "min";
}

int main() {
    int minuto;
    tempo dado;
    
    cout << "Digite o tempo em minutos: ";
    cin >> minuto;
    
    
    cout << "O tempo convertido fica: ";
    dado.horaMinuto(minuto);
    
    return 0;
}
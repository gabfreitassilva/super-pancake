#include <iostream>

using std::cout;
using std::cin;

int main() {
    int hora, minuto, segundo;
    
    cout << "Entre com um tempo no formato HH:MM:SS: ";
    cin >> hora >> minuto >> segundo;
        
    segundo = (hora * 3600) + (minuto * 60) + segundo; // transforma o tempo em segundos
    cout << "\nO tempo em segundos e: " << segundo;
    
    return 0;
}
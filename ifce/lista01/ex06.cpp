#include <iostream>

using std::cout;
using std::cin;

int main() {
    double numero[10], maior;
    
    for (int i = 0; i < 10; i++) {
        cout << "Digite um numero: ";
        cin >> numero[i];
        
        if (i == 0) {
            maior = numero[i];
        } else if (numero[i] > maior) {
            maior = numero[i];
        }
    }
    
    cout << "\nO maior numero digitado foi: " << maior << '\n';
    
    return 0;
}
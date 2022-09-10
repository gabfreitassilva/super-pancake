#include <iostream>

using std::cout;
using std::cin;

int main() {
    double numero[3], maior, menor;
    
    cout << "Digite tres numeros: ";
    cin >> numero[0] >> numero[1] >> numero[2];
    
    for (int i = 0; i < 3; i++) {
        if (i == 0) {
            maior = numero[i];
            menor = numero[i];
        } else if (numero[i] > maior) {
            maior = numero[i];
        }
        
        if (numero[i] < menor) {
            menor = numero[i];
        }
    }
    
    cout << "O menor numero e: " << menor << '\n';
    cout << "O maior numero e: " << maior << '\n';
    cout << "A diferenca entre o maior e o menor numero e de: " << (maior - menor) << '\n';
    
    return 0;
}
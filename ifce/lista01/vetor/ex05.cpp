#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

int main() {
    int tamString {0};
    string userString;
    
    cout << "Digite uma palavra ou frase qualquer para ver como fica escrito ao contrario: ";
    getline(cin, userString);
    tamString = userString.length(); // recebe o tamanho da string digitado pelo usuario

    cout << "\nO que voce digitou ao contrario fica: ";
    for (int i = 0; i <= userString.length(); i++) {
        cout << userString[tamString - i];
    }

    return 0;
}
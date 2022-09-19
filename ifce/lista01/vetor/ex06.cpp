#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

int main() {
    string userString;

    cout << "ATENCAO: trocaremo a por b e A por B.\n\n";

    cout << "Digite uma frase ou palavra qualquer: ";
    getline(cin, userString);

    for (int i = 0; i < userString.length(); i++) { //.length() vai me fornecer o tamanho da string digitada pelo usuario
        if (isalpha(userString[i])) {
            if (userString[i] == 'a') { // faz a checagem e efetua a troca de letra
                userString[i] = 'b';
            }

            if (userString[i] == 'A') { // faza checagem e efetua a troca de letra
                userString[i] = 'B';
            }
        }
    }

    cout << "O que foi digitado com as letras trocadas fica: " << userString << '\n';
    
    return 0;
}
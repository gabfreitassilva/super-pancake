#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

int main() {
    int qtdConsoante {0};
    string userString;
    char aux, vogal[] {'a', 'e', 'i', 'o', 'u'};

    cout << "Digite uma palavra ou uma frase qualquer: ";
    getline(cin, userString);

    for (int i = 0; i < userString.length(); i++) {
        if (isalpha(userString[i])) { // função isalpha vai me passar somentes as letras da string
            aux = tolower(userString[i]);
            for (int j = 0; j < 5; j++) {
                if (aux == vogal[j]) {
                    break;
                } else if (j == 4) { // se o laço não for quebrado antes de chegar na 4 tentativa, logo será uma consoante
                    qtdConsoante++;
                }
            }
        }
    }

    cout << "Foram digitadas " << qtdConsoante << " consoantes.\n";

    return 0;
}
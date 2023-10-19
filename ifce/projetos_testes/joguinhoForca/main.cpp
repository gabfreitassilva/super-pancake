#include <iostream>
#include "palavra.h"

int main() {
    std::string palavra_secreta, palavra_aleatoria, palavra_usuario;

    palavra_aleatoria = palavra(); // receber a palavra aleatoria gerada pelo programa
    palavra_secreta = "-----"; // preenche a variavel da palavra secreta com traços

    std::cout << "Adivinhe a palavra: " << palavra_secreta << std::endl;
    
    while(palavra_secreta != palavra_aleatoria) { // laço para a entrada dos palpites do usuario
        std::cout << "Seu palpite       : ";
        std::cin >> palavra_usuario;

        // inicio do laço para montar a testar a palavra que o usuario digitou e designar,
        // caso tenha, letras certas nos seus devidos locais
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5; j++) {
                if(palavra_usuario[i] == palavra_aleatoria[j]) {
                    palavra_secreta[j] = palavra_usuario[i];
                }
            }
        }

        std::cout << "Adivinhe a palavra: " << palavra_secreta << std::endl; // retorna a palavra decifrada
    }
    return 0;
}
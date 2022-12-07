#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <algorithm>

int main() {
    std::stack<std::string> cursos;
    std::vector<std::string> ordemAlfabetica;

    cursos.push("linguagem de programacao");
    cursos.push("desenho Tecnico");
    cursos.push("etica e Cidadania");
    cursos.push("metrologia");
    cursos.push("calculo");
    
    // laço para popular o vector com os itens da pilha
    for (int j = 0; j < 5; j++) {
        ordemAlfabetica.push_back(cursos.top());
        cursos.pop();
    }
    std::sort(ordemAlfabetica.begin(), ordemAlfabetica.end()); // função sort usada para a ordenação alfabetica (biblioteca algorithm)
    /*
    primeiro membro da função você informa o começo do vector/vetor
    já no segundo membro você informa o fim do vetor/vector
    */
    
    // saida em ordem alfabetica
    std::cout << "Cursos cadastrados na pilha (ordem alfabetica):\n";
    for (int m = 0; m < 5; m++) {
        std::cout << "Curso " << (m + 1) << ": " << ordemAlfabetica[m] << '\n';
    }

    return 0;
}

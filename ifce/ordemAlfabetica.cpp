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

    for (int j = 0; j < 5; j++) {
        ordemAlfabetica.push_back(cursos.top());
        cursos.pop();
    }
    std::sort(ordemAlfabetica.begin(), ordemAlfabetica.end());

    std::cout << "Cursos cadastrados na pilha (ordem alfabetica):\n";
    for (int m = 0; m < 5; m++) {
        std::cout << "Curso " << (m + 1) << ": " << ordemAlfabetica[m] << '\n';
    }

    return 0;
}

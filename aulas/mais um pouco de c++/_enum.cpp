#include <iostream>

int main() {
    enum languages {python, cpp, c, rust, cobol, php};
    languages linguagem;
    linguagem = cpp;

    std::cout << linguagem << '\n';

    return 0;
}
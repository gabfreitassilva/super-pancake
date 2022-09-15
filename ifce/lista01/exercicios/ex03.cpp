#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::setprecision;
using std::fixed;

int main() {
    double nota1, nota2, nota3, media, notaFinal;
    
    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;
    cout << "Digite a terceira nota: ";
    cin >> nota3;

    media = ((nota1 * 1) + (nota2 * 2) + (nota3 * 3)) / (1 + 2 + 3);
    
    cout << setprecision(2) << fixed << '\n';
    cout << "Media igual a: " << media;

    if (media >= 7) {
        cout << "\nAluno aprovado.\n";
    } else {
        cout << "\nAluno reprovado.\n";
        notaFinal = 10 - media;
        cout << "Para ser aprovado na prova final o aluno precisa tirar: " << notaFinal;
    }
    
    return 0;    
}
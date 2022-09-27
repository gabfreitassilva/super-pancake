#include <iostream>

using std::string;
using std::cout;
using std::cin;

class AlunosEngControl {
    private:
        int idade, id;
        string nome;

    public:
        void setAlunoNome(string nome) {
            nome = nome;
        }

        void getAlunoNome(string nome) {
            cout << nome;
        }
};


int main() {
    string nome;
    AlunosEngControl aluno;

    cout << "Digite o nome do aluno: ";
    getline(cin, nome);
    aluno.setAlunoNome(nome);

    cout << "O aluno se chama: ";
    aluno.getAlunoNome(nome);

    return 0;
}
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::ws;

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

        void setIdAluno(int id) {
            this->id = id;
        }

        int getIdAluno() {
            return id;
        }
};


int main() {
    int id;
    string nome;
    AlunosEngControl aluno;

    cout << "Digite o ID do aluno: ";
    cin >> id;
    aluno.setIdAluno(id);

    cout << "Digite o nome do aluno: ";
    getline(cin >> ws, nome);
    aluno.setAlunoNome(nome);

    cout << "\nID aluno: " << aluno.getIdAluno() << '\n';
    cout << "Nome do aluno: ";
    aluno.getAlunoNome(nome);

    return 0;
}
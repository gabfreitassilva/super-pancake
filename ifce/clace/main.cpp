#include <iostream>
#include "Funcionario.h" // inclusão da classe

using std::string;
using std::cout;
using std::cin;
using std::ws;

int main() {
    int _funcionarioID;
    double _salario;
    string _nome;
    
    Funcionario dados[2]; // criando o objeto para atribuir os dados a minha classe
    
    cout << "-----------------ENTRADA DE DADOS-----------------\n";
    for(int i = 0; i < 2; i++) {
        cout << "Digite o ID do funcionario " << (i + 1) << ": ";
        cin >> _funcionarioID;
        cout << "Digite o nome do funcionario " << (i + 1) << ": ";
        getline(cin >> ws, _nome);
        cout << "Digite o salario do funcionario " << (i + 1) << ": R$ ";
        cin >> _salario;
        dados[i].setDados(_funcionarioID, _salario, _nome);
    }
    cout << "--------------------------------------------------\n";
    
    cout << "-----------------SAIDA DE DADOS-------------------\n";
    for(int i = 0; i < 2; i++) {
        dados[i].getDados();
    }
    cout << "--------------------------------------------------\n";
    
    return 0;
}
#include <iostream>
#include "Funcionario.h"

using std::cout;

void Funcionario::setDados(int _funcionarioID, double _salario, string _nome) { // criando a funcionalidade da função ><
    funcionarioID = _funcionarioID;
    salario = _salario;
    nome = _nome;
}

void Funcionario::getDados(void) { // criando a funcionalidade da função ><
    cout << "Funcionario ID: " << funcionarioID << '\n';
    cout << "Nome do funcionario: " << nome << '\n';
    cout << "Salario do funcionario: R$ " << salario << '\n';
}
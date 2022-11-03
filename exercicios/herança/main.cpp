#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::getline;
using std::string;
using std::ws;

#include "classes.h"

int main() {
    Caminhao caminhao[2];
    int rodas, passageiros, carga;

    cout << "CAMINHAO: 1\n";
    cout << "Rodas: ";
    cin >> rodas;
    cout << "Passageiros: ";
    cin >> passageiros;
    cout << "Carga: ";
    cin >> carga;

    caminhao[0].fixaRodas(rodas);
    caminhao[0].fixaPassageiros(passageiros);
    caminhao[0].fixaCarga(carga);
    cout << "-----------------CAMINHAO CADASTRADO---------------\n";
    caminhao[0].exibir();
    cout << "---------------------------------------------------\n";

    cout << "CAMINHAO: 2\n";
    cout << "Rodas: ";
    cin >> rodas;
    cout << "Passageiros: ";
    cin >> passageiros;
    cout << "Carga: ";
    cin >> carga;

    caminhao[1].fixaRodas(rodas);
    caminhao[1].fixaPassageiros(passageiros);
    caminhao[1].fixaCarga(carga);
    cout << "-----------------CAMINHAO CADASTRADO---------------\n";
    caminhao[1].exibir();
    cout << "---------------------------------------------------\n";

    Motocicleta moto;
    string t_moto;

    cout << "Qual tipo da moto (scooter - custom - off-road): ";
    getline(cin >> ws, t_moto);
    if (t_moto == "scooter") {
        moto.fixaTipoMoto(scooter);
    } else if (t_moto == "custom") {
        moto.fixaTipoMoto(custom);
    } else if (t_moto == "off-road") {
        moto.fixaTipoMoto(offroad);
    }
    cout << "-------------------MOTO CADASTRADA-----------------\n";
    moto.exibir();
    cout << "---------------------------------------------------\n";
    
    Aviao aviao;
    string model;

    cout << "Qual o tipo de aviao(jato - monomotor - comercial): ";
    getline(cin >> ws, model);
    if (model == "jato") {
        aviao.fixaTipoAviao(jato);
    } else if (model == "monomotor") {
        aviao.fixaTipoAviao(monomotor);
    } else if (model == "comercial") {
        aviao.fixaTipoAviao(comercial);
    }
    cout << "-------------------AVIAO CADASTRADO-----------------\n";
    aviao.exibir();
    cout << "----------------------------------------------------\n";

    return 0;
}
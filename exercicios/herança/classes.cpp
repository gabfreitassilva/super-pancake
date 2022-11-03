#include <iostream>
using std::cout;

#include "classes.h"

// CLASSE VEICULOS
void Veiculos::fixaRodas(int valor) {
    rodas = valor;
}
int Veiculos::obtemRodas() {
    return rodas;
}
void Veiculos::fixaPassageiros(int valor) {
    passageiros = valor;
}
int Veiculos::obtemPassageiros() {
    return passageiros;
}

// CLASSE CAMINHAO
void Caminhao::fixaCarga(int valor) {
    carga = valor;
}
int Caminhao::obtemCarga() {
    return carga;
}
void Caminhao::exibir() {
    cout << "Rodas: " << obtemRodas() << '\n';
    cout << "Passageiros: " << obtemPassageiros() << '\n';
    cout << "Carga: " << obtemCarga() << '\n';
}

// CLASSE AUTOMOVEL
void Automovel::fixaTipo(enum tipo t) {
    tipoCarro = t;
}
enum tipo Automovel::obtemTipo() {
    return tipoCarro;
}
void Automovel::exibir() {
    cout << "Rodas: " << obtemRodas() << '\n';
    cout << "Passageiros: " << obtemPassageiros() << '\n';
    cout << "Tipo: ";
    switch (obtemTipo()) {
        case carro:
            cout << "carro\n";
            break;
        case furgao:
            cout << "furgao\n";
            break;
        case perua:
            cout << "perua\n";
            break;
    }
}

// CLASSE MOTOCICLETA
void Motocicleta::fixaTipoMoto(enum tipoMoto t) {
    t_moto = t;
}
enum tipoMoto Motocicleta::obtemTipoMoto() {
    return t_moto;
}
void Motocicleta::exibir() {
    cout << "Tipo da moto: ";
    switch (obtemTipoMoto()) {
        case scooter:
            cout << "scooter\n";
            break;
        case custom:
            cout << "custom\n";
            break;
        case offroad:
            cout << "off-road\n";
            break;
    }
}

// CLASSE AVIAO
void Aviao::fixaTipoAviao(enum tipoAviao t) {
    modelo = t;
}
enum tipoAviao Aviao::obtemTipoAviao() {
    return modelo;
}
void Aviao::exibir() {
    cout << "Tipo do aviao: ";
    switch (obtemTipoAviao()) {
        case jato:
            cout << "jato\n";
            break;
        case monomotor:
            cout << "monomotor\n";
            break;
        case comercial:
            cout << "comercial\n";
            break;
    }
}
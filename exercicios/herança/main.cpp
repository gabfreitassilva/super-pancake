#include <iostream>
using std::cout;
using std::cin;

class Veiculos {
    private:
        int rodas, passageiros;
    public:
        void fixaRodas(int valor);
        int obtemRodas();
        void fixaPassageiros(int valor);
        int obtemPassageiros();
};

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

class Caminhao : public Veiculos {
    private:
        int carga;
    public:
        void fixaCarga(int valor);
        int obtemCarga();
        void exibir();
};

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

enum tipo {carro, furgao, perua};
class Automovel : public Veiculos {
    private:
        enum tipo tipoCarro;
    public:
        void fixaTipo(enum tipo t);
        enum tipo obtemTipo();
        void exibir();
};

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

class Motocicleta : public Veiculos {
    private:
        int velocidadeMaxima;
    public:
        int cilindradas;
        void fixaVelocidade(int valor);
        int obtemVelocidade();
};

void Motocicleta::fixaVelocidade(int valor) {
    cilindradas = valor;
    if (cilindradas < 100) {
        velocidadeMaxima = 150;
    } else if (cilindradas < 200) {
        velocidadeMaxima = 220;
    } else {
        velocidadeMaxima = 330;
    }
}
int Motocicleta::obtemVelocidade() {
    return velocidadeMaxima;
}

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
    int cc;

    cout << "Quantas cilindradas tem a mota (0 - 300): ";
    cin >> cc;
    cout << "Quantos passageiros: ";
    cin >> passageiros;

    moto.fixaVelocidade(cc);
    moto.fixaPassageiros(passageiros);

    cout << "-------------------MOTO CADASTRADA-----------------\n";
    cout << "Velocidade: " << moto.obtemVelocidade() << '\n';
    cout << "Passageiros: " << moto.obtemPassageiros() << '\n';
    cout << "---------------------------------------------------\n";
    
    return 0;
}
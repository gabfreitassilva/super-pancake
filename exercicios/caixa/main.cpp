#include <iostream>
using std::cout;
using std::cin;

class Caixa {
    private:
        double altura, largura;
    public:
        void fixaDimensoes(double altura, double largura);
        double obtemDimensoes();
        void area();
};

void Caixa::fixaDimensoes(double altura, double largura) {
    this->altura = altura;
    this->largura = largura;
}
double Caixa::obtemDimensoes() {
    return altura, largura;
}
void Caixa::area() {
    cout << "Area da caixa: " << (largura * altura) << '\n';
}

enum cor {azul, verde, preto};
class CaixaColor : public Caixa {
    private:
        enum cor cor;
    public:
        void fixaCorCaixa(enum cor c);
        enum cor obtemCorCaixa();
        void exibir();
};

void CaixaColor::fixaCorCaixa(enum cor c) {
    cor = c;
}
enum cor CaixaColor::obtemCorCaixa() {
    return corCaixa;
}
void CaixaColor::exibir() {
    cout << "Cor da caixa: ";
    switch (obtemCorCaixa()) {
        case azul:
            cout << "azul\n";
            break;
        case verde:
            cout << "verde\n";
            break;
        case preto:
            cout << "preto\n";
            break;
    }
}

int main() {

    CaixaColor caixa;
    string cor;
    double altura, largura;

    cout << "Qual a cor da caixa(azul - verde - preto): ";
    getline(cin >> ws, cor);
    if (cor == "azul") {
        caixa.fixaCorCaixa(azul);
    } else if (cor == "verde") {
        caixa.fixaCorCaixa(verde);
    } else if (cor == "preto") {
        caixa.fixaCorCaixa(preto);
    }
    cout << "Qual altura da caixa: ";
    cin >> altura;
    cout << "Qual largura da caixa: ";
    cin >> largura;
    caixa.fixaDimensoes(altura, largura);
    cout << "----------------CAIXA CADASTRADA---------------\n";
    caixa.area();
    caixa.exibir();
    cout << "-----------------------------------------------\n";

    return 0;
}
#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

int main() {
    int a, b, c, delta;
    double raiz;

    cout << "Equacao do segundo grau" << '\n';
    cout << "Informe o coeficiente a: ";
    cin >> a;
    cout << "Informe o coeficiente b: ";
    cin >> b;
    cout << "Informe o coeficiente c: ";
    cin >> c;

    if (a != 0) {
        delta = pow(b , 2) - (4 * a * c);
        cout << "\nO valor de delta e " << delta << '\n';

        if (delta > 0) {
            raiz = (-b + sqrt(delta)) / (2 * a); // primeira raiz
            cout << "O valor da primeira raiz e: " << raiz << '\n';

            raiz = (-b - sqrt(delta)) / (2 * a); // segunda raiz
            cout << "O valor da segunda raiz e: " << raiz << '\n';
        } else if (delta == 0) {
            raiz = (-b + sqrt(delta)) / (2 * a);
            cout << "Delta e igual a 0, logo o valor da unica raiz e " << raiz << '\n';
        } else {
            cout << "O valor de delta e menor que 0, logo a equacao nao tem raiz real." << '\n';
        }
    } else {
        cout << "Coeficiente a = 0, logo não satisfaz como equacao do segundo grau." << '\n';
    }

    return 0;
}
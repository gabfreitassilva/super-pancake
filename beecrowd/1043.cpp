#include <iostream>
using std::cout;
using std::cin;

int main() {
    double a, b, c, perimetro, area;

    cin >> a >> b >> c;

    if (a + b > c && a + c > b && c + b > a) {
        perimetro = a + b + c;
    }

    cout << perimetro << '\n';

    return 0;
}
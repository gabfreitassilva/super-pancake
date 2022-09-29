#include <iostream>

using std::cout;
using std::cin;

int max(int x, int y, int z) {
    if (x > y) {
        if (x > z) {
            return x;
        }
    } else if (y > z) {
        return y;
    } else {
        return z;
    }
}

int main() {
    int x, y, z;

    cout << "Digite tres numeros: ";
    cin >> x >> y >> z;

    cout << "O maior numero e: " << max(x, y, z);

    return 0;
}
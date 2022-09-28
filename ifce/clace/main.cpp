#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
        
double max(double x, double y) {
    return (x > y) ? x : y;
}

int main() {

    cout << max(3.56, 5.56);

    return 0;
}
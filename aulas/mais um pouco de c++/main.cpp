#include <iostream>
#include <random>

int number_random() {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(0,79);
    int number = dist(mt);
    return number;
}

int main() {

    std::cout << number_random();

    return 0;
}
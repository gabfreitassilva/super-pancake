#include <iostream>

using std::cout;
using std::cin;

class Propaganda {
    private: // só consigo acessar dentro da minha classe


    public: // consigo acessar em qualquer lugar

    void dia() {
        cout << "hoje de fato e uma dia.\n";
    }

    void amanha() {
        cout << "amanha de fato e um dia tambem.\n";
    }

};

class Car {
    private:
        int year;
        double price, km;

    public:
        void setYear(int year) {
            this->year = year;
        }

        int getYear() {
            return year;
        }
};

int main() {
    Car fiat;

    fiat.setYear(1995);
    cout << "Fiat:\n";
    cout << "Ano: " << fiat.getYear() << '\n';

    return 0;
}
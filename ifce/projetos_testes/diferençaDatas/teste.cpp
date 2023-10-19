#include <iostream>

struct Data {
    int dia;
    int mes;
    int ano;
};

bool eh_ano_bissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

int dias_no_mes(int mes, int ano) {
    int dias[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (mes == 2 && eh_ano_bissexto(ano)) {
        return 29;
    }
    return dias[mes];
}

int calcular_dias(const Data& data1, const Data& data2) {
    int total_dias = 0;

    // Primeira data
    int dia1 = data1.dia;
    int mes1 = data1.mes;
    int ano1 = data1.ano;

    // Segunda data
    int dia2 = data2.dia;
    int mes2 = data2.mes;
    int ano2 = data2.ano;

    while (dia1 != dia2 || mes1 != mes2 || ano1 != ano2) {
        total_dias++;

        dia1++;

        if (dia1 > dias_no_mes(mes1, ano1)) {
            dia1 = 1;
            mes1++;

            if (mes1 > 12) {
                mes1 = 1;
                ano1++;
            }
        }
    }

    return total_dias;
}

int main() {
    Data data1;
    Data data2;

    std::cout << "Digite a primeira data (dia mes ano): ";
    std::cin >> data1.dia >> data1.mes >> data1.ano;

    std::cout << "Digite a segunda data (dia mes ano): ";
    std::cin >> data2.dia >> data2.mes >> data2.ano;

    // Data data1 = {1, 1, 2023};
    // Data data2 = {22, 9, 2023};

    int dias_entre_datas = calcular_dias(data1, data2);

    std::cout << "Dias entre as datas: " << dias_entre_datas << std::endl;

    return 0;
}

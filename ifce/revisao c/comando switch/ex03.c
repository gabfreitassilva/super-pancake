#include <stdio.h>
#include <ctype.h>
//#include <stdlib.h>

int main() {
    float salario, aumento;
    char planoTrabalho;

    printf("Digite o seu plano de trabalho (A, B, C): ");
    planoTrabalho = getchar();

    printf("Digite o seu salario atual: R$ ");
    scanf("%f", &salario);

    switch (toupper(planoTrabalho)) {
        case 'A':
            aumento = (0.1*salario)+salario;
            printf("Voce tem direito a 10%% de aumento\n");
            printf("Seu novo salario e de R$ %.2f\n", aumento);
            break;
        case 'B':
            aumento = (0.15*salario)+salario;
            printf("Voce tem direito a 15%% de aumento\n");
            printf("Seu novo salario e de R$ %.2f\n", aumento);
            break;
        case 'C':
            aumento = (0.2*salario)+salario;
            printf("Voce tem direito a 20%% de aumento\n");
            printf("Seu novo salario e de R$ %.2f", aumento);
            break;
        default:
            printf("Plano de trabalho invalido, por favor insira uma das tres opcoes citadas.\n");
            break;
    }

    //system("pause");
    return 0;
}
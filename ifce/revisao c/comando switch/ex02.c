#include <stdio.h>
// #include <stdlib.h>

int main() {
    int idade, faixaEtaria;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // faixa etaria = { CRIANCA, ADOLESCENTE, JOVEM, ADULTO, MELHOR IDADE, APOSENTADO}
    if (idade>=1 && idade<=11) {
        faixaEtaria = 1; // crianca
    } else if (idade>=12 && idade<=17) {
        faixaEtaria = 2; // adolescente
    } else if (idade>=18 && idade<=24) {
        faixaEtaria = 3; // jovem
    } else if (idade>=25 && idade<=50) {
        faixaEtaria = 4; // adulto
    } else if (idade>=51 && idade<=60) {
        faixaEtaria = 5; // melhor idade
    } else {
        faixaEtaria = 6; // aposentado
    }

    switch (faixaEtaria) {
        case 1:
            printf("Sua faixa etaria e: Crianca\n");
            break;
        case 2:
            printf("Sua faixa etaria e: Adolescente\n");
            break;
        case 3:
            printf("Sua faixa etaria e: Jovem\n");
            break;
        case 4:
            printf("Sua faixa etaria e: Adulto\n");
            break;
        case 5:
            printf("Sua faixa etaria e: Melhor idade\n");
            break;
        case 6:
            printf("Sua faixa etaria e: Aposentado\n");
            break;
    }

    // system("pause");
    return 0;
}
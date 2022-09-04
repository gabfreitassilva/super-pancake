#include <stdio.h>
// #include <stdlib.h>

int main() {
    int idade[8], faixa_1a10=0, faixa_11a20=0, faixa_21a30=0, faixa_31mais=0;
    float peso[8], mediaPeso_1a10, mediaPeso_11a20, mediaPeso_21a30, mediaPeso_31mais;

    for (int pessoa=0; pessoa<8; pessoa++) {
        printf("\nDigite uma idade: ");
        scanf("%d", &idade[pessoa]);
        printf("Digite um peso:kg ");
        scanf("%f", &peso[pessoa]);
    }

    for (int i=0; i<8; i++) {
        if (idade[i]>=1 && idade[i]<=10) {
            faixa_1a10++;
            mediaPeso_1a10 += peso[i];
        } else if (idade[i]>=11 && idade[i]<=20) {
            faixa_11a20++;
            mediaPeso_11a20 += peso[i];
        } else if (idade[i]>=21 && idade[i]<=30) {
            faixa_21a30++;
            mediaPeso_21a30 += peso[i];
        } else {
            faixa_31mais++;
            mediaPeso_31mais += peso[i];
        }
    }

    printf("\nFaixa etaria 1 a 10: %d \nFaixa etaria 11 a 20: %d\n", faixa_1a10, faixa_11a20);
    printf("Faixa etaria 21 a 30: %d \nFaixa etaria acima dos 30: %d\n", faixa_21a30, faixa_31mais);

    mediaPeso_1a10 = mediaPeso_1a10/faixa_1a10;
    mediaPeso_11a20 = mediaPeso_11a20/faixa_11a20;
    mediaPeso_21a30 = mediaPeso_21a30/faixa_21a30;
    mediaPeso_31mais = mediaPeso_31mais/faixa_31mais;
    printf("\nA media de peso da faixa etaria 1 a 10: %.2f\n", mediaPeso_1a10);
    printf("A media de peso da faixa etaria 11 a 20: %.2f\n", mediaPeso_11a20);
    printf("A media de peso da faixa etaria 21 a 30: %.2f\n", mediaPeso_21a30);
    printf("A media de peso da faixa etaria 31 mais: %.2f\n", mediaPeso_31mais);

    // system("pause");
    return 0;
}
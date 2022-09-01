#include <stdio.h>
#include <ctype.h>
//#include <stdlib.h>

int main() {
    char letra;

    printf("Digite qualquer letra: ");
    scanf("%c", &letra);

    switch (toupper(letra)) {
        case 'A':
            printf("A letra A e uma vogal.");
            break;
        case  'E':
            printf("A letra E e uma vogal.");
            break;
        
        case 'I':
            printf("A letra I e uma vogal.");
            break;

        case 'O':
            printf("A letra O e uma vogal.");
            break;

        case 'U':
            printf("A letra U e uma vogal.");
            break;
        
        default:
            printf("A letra %c nao e uma vogal.", letra);
            break;
    }

    //system("pause");
    return 0;
}
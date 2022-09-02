#include <stdio.h>
//#include <stdlib.h>

int main() {
   int numero=0;

   while (numero<=100) {
    if (numero%2==1) {
        printf("%d\n", numero);
    }
    numero++;
   }

    //system("pause");
    return 0;
}
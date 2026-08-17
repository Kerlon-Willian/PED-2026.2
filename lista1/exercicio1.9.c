/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    int valor, n1, n2, n5, n10, n20, n50, n100;
    printf("Digite o valor: \n");
    scanf("%d", &valor);
    n100 = valor / 100;
    valor = valor % 100;
    n50 = valor / 50;
    valor = valor % 50;
    n20 = valor / 20;
    valor = valor % 20;
    n10 = valor / 10;
    valor = valor % 10;
    n5 = valor / 5;
    valor = valor % 5;
    n2 = valor / 2;
    valor = valor % 2;
    n1 = valor / 1;
    printf("%d nota(s) de 100,00 \n", n100);
    printf("%d nota(s) de 50,00 \n", n50);
    printf("%d nota(s) de 20,00 \n", n20);
    printf("%d nota(s) de 10,00 \n", n10);
    printf("%d nota(s) de 5,00 \n", n5);
    printf("%d nota(s) de 2,00 \n", n2);
    printf("%d nota(s) de 1,00 \n", n1);
    return 0;
}
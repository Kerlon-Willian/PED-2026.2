/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    int numero1, numero2, soma;
    printf("Digite o primeiro numero: \n");
    scanf("%d",&numero1);
    printf("Digite o segundo numero: \n");
    scanf("%d",&numero2);
    soma = numero1 + numero2;
    printf("%d + %d = %d", numero1, numero2, soma);
    return 0;
}
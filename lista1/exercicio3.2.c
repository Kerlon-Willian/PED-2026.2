/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    int N, i, valor, soma;
    soma = 0;
    printf("Digite a quantidade de numeros: \n");
    scanf("%d", &N);
    for(i = 1; i <= N; i++){
        printf("Digite o numero %d: \n", i);
        scanf("%d", &valor);
        soma = soma + valor;
    };
    printf("A soma total e %d", soma);
    return 0;
}
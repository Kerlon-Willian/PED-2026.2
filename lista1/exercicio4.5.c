/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int somaDigitos(int n){
    int soma;
    soma = 0;
    while(n > 0){
        soma = soma + n % 10;
        n = n / 10;
    };
    return soma;
}

int main(){
    int N, resultado;
    printf("Digite o numero: \n");
    scanf("%d", &N);
    resultado = somaDigitos(N);
    printf("A soma dos digitos de %d e %d", N, resultado);
    return 0;
}
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

long fatorial(int n){
    long resultado;
    int i;
    resultado = 1;
    for(i = 1; i <= n; i++){
        resultado = resultado * i;
    };
    return resultado;
}

int main(){
    int N;
    long resultado;
    printf("Digite o valor de N: \n");
    scanf("%d", &N);
    resultado = fatorial(N);
    printf("%d! = %ld", N, resultado);
    return 0;
}
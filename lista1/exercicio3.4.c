/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    int N, i, pares;
    pares = 0;
    printf("Digite o valor de N: \n");
    scanf("%d", &N);
    for(i = 1; i <= N; i++){
        if(i % 2 == 0){
            pares = pares + 1;
        };
    };
    printf("Existem %d numeros pares entre 1 e %d", pares, N);
    return 0;
}
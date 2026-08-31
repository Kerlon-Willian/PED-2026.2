/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    int N, i, divisores;
    divisores = 0;
    printf("Digite o numero: \n");
    scanf("%d", &N);
    for(i = 1; i <= N; i++){
        if(N % i == 0){
            divisores = divisores + 1;
        };
    };
    if(N > 1 && divisores == 2){
        printf("O numero e primo");
    } else {
        printf("O numero nao e primo");
    };
    return 0;
}
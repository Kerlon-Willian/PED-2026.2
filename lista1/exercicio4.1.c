/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int maior(int a, int b, int c){
    if(a >= b && a >= c){
        return a;
    } else if(b >= a && b >= c){
        return b;
    } else {
        return c;
    };
}

int main(){
    int A, B, C, resultado;
    printf("Digite o valor da variavel A: \n");
    scanf("%d", &A);
    printf("Digite o valor da variavel B: \n");
    scanf("%d", &B);
    printf("Digite o valor da variavel C: \n");
    scanf("%d", &C);
    resultado = maior(A, B, C);
    printf("O maior valor e %d", resultado);
    return 0;
}
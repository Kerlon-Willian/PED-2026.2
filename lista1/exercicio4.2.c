/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void maior(int a, int b, int c){
    if(a >= b && a >= c){
        printf("O maior valor e %d", a);
    } else if(b >= a && b >= c){
        printf("O maior valor e %d", b);
    } else {
        printf("O maior valor e %d", c);
    };
}

int main(){
    int A, B, C;
    printf("Digite o valor da variavel A: \n");
    scanf("%d", &A);
    printf("Digite o valor da variavel B: \n");
    scanf("%d", &B);
    printf("Digite o valor da variavel C: \n");
    scanf("%d", &C);
    maior(A, B, C);
    return 0;
}
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    int A, B;
    printf("Digite o valor da variavel A: \n");
    scanf("%d", &A);
    printf("Digite o valor da variavel B: \n");
    scanf("%d", &B);
    A = A + B;
    B = A - B;
    A = A - B;
    printf("Os valores foram trocados e aora A = %d e B = %d ", A, B);
    return 0;
}
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    int A, B, C;
    printf("Digite o valor da variavel A: \n");
    scanf("%d", &A);
    printf("Digite o valor da variavel B: \n");
    scanf("%d", &B);
    printf("Digite o valor da variavel C: \n");
    scanf("%d", &C);
    if(A > B & C){
        printf("O numero %d da variavel A e o maior", A);
    } else if(B > C & A){
        printf("O numero %d da variavel B e o maior", B);
    } else {
        printf("O numero %d da variavel C e o maior", C);
    }; 
    return 0;
}
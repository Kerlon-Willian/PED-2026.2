/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    int A;
    printf("Digite o valor da variavel A: \n");
    scanf("%d", &A);
    if(A % 2 == 0){
        printf("O numero e par");
    } else {
        printf("O numero e impar");
    };
    return 0;
}
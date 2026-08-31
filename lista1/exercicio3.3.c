/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    int N, i;
    printf("Digite o valor de N: \n");
    scanf("%d", &N);
    for(i = 1; i <= 10; i++){
        printf("%d x %d = %d \n", N, i, N * i);
    };
    return 0;
}
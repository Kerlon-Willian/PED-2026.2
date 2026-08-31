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
    for(i = 1; i <= N; i++){
        printf("%d \n", i);
    };
    return 0;
}
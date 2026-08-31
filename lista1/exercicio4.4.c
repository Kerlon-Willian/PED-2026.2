/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int isPrimo(int n){
    int i, divisores;
    divisores = 0;
    for(i = 1; i <= n; i++){
        if(n % i == 0){
            divisores = divisores + 1;
        };
    };
    if(n > 1 && divisores == 2){
        return TRUE;
    } else {
        return FALSE;
    };
}

int main(){
    int i;
    printf("Numeros primos entre 1 e 100: \n");
    for(i = 1; i <= 100; i++){
        if(isPrimo(i) == TRUE){
            printf("%d \n", i);
        };
    };
    return 0;
}
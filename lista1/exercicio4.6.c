/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int isCapicua(int n){
    int copia, invertido;
    copia = n;
    invertido = 0;
    while(copia > 0){
        invertido = invertido * 10 + copia % 10;
        copia = copia / 10;
    };
    if(invertido == n){
        return 1;
    } else {
        return 0;
    };
}

int main(){
    int N, resultado;
    printf("Digite o numero: \n");
    scanf("%d", &N);
    resultado = isCapicua(N);
    if(resultado == 1){
        printf("O numero %d e capicua", N);
    } else {
        printf("O numero %d nao e capicua", N);
    };
    return 0;
}
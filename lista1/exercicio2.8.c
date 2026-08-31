/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    float A, B, resultado;
    char sinal;
    printf("Digite o primeiro numero: \n");
    scanf("%f", &A);
    printf("Digite o sinal da operacao: \n");
    scanf(" %c", &sinal);
    printf("Digite o segundo numero: \n");
    scanf("%f", &B);
    if(sinal == '+'){
        resultado = A + B;
        printf("%.2f", resultado);
    } else if(sinal == '-'){
        resultado = A - B;
        printf("%.2f", resultado);
    } else if(sinal == '*'){
        resultado = A * B;
        printf("%.2f", resultado);
    } else if(sinal == '/'){
        if(B == 0){
            printf("Divisao por zero nao permitida.");
        } else {
            resultado = A / B;
            printf("%.2f", resultado);
        };
    } else {
        printf("Sinal invalido");
    };
    return 0;
}
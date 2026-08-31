/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    int numero, quantidade, soma;
    float media;
    quantidade = 0;
    soma = 0;
    printf("Digite um numero ou -1 para parar: \n");
    scanf("%d", &numero);
    while(numero != -1){
        soma = soma + numero;
        quantidade = quantidade + 1;
        printf("Digite um numero ou -1 para parar: \n");
        scanf("%d", &numero);
    };
    if(quantidade > 0){
        media = (float) soma / quantidade;
        printf("Foram lidos %d numeros e a media e %.2f", quantidade, media);
    } else {
        printf("Nenhum numero foi lido");
    };
    return 0;
}
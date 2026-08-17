/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    int idade;
    printf("Digite a sua idade: \n");
    scanf("%d", &idade);
    if(idade >= 0 & idade < 12){
        printf("Voce e uma crianca");
    } else if(idade < 18){
        printf("Voce e um adolescente");
    } else if(idade < 60){
        printf("Voce e um adulto");
    } else if(idade > 59{
        printf("Voce e um idoso");
    } else {
        printf("Idade invalida");
    }; 
    return 0;
}
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    float kmPorLitro, km, valor, pessoas, gasolina;
    printf("Quantos quilômetros seu carro percorre por litro de combustível: \n");
    scanf("%f",&kmPorLitro);
    printf("Quantos quilômetros ela pretende viajar de carro: \n");
    scanf("%f",&km);
    printf("Qual o valor do combustível no posto onde ela abastece: \n");
    scanf("%f",&gasolina);
    printf("Quantas pessoas vão viajar com ela e dividir a conta: \n");
    scanf("%f",&pessoas);
    valor = km / kmPorLitro * gasolina / pessoas;
    printf("o preco para cada sera de R$%.2f ", valor);
    return 0;
}
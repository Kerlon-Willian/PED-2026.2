/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    int mes;
    printf("Digite o numero do mes: \n");
    scanf("%d", &mes);
    switch (mes){
        case 1:
            printf("O mes e Janeiro");
            break;
        case 2:
            printf("O mes e Fevereiro");
            break;
        case 3:
            printf("O mes e Marco");
            break;
        case 4:
            printf("O mes e Abril");
            break;
        case 5:
            printf("O mes e Maio");
            break;
        case 6:
            printf("O mes e Junho");
            break;
        case 7:
            printf("O mes e Julho");
            break;
        case 8:
            printf("O mes e Agosto");
            break;
        case 9:
            printf("O mes e Setembro");
            break;
        case 10:
            printf("O mes e Outubro");
            break;
        case 11:
            printf("O mes e Novembro");
            break;
        case 12:
            printf("O mes e Dezembro");
            break;
        default:
            printf("Numero de mes invalido");
    };
    return 0;
}
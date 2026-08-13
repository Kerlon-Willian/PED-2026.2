/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    int segundos, horas, minutos;
    int minutosReal, segundosReal;
    printf("Digite a quantidade de segundos: \n");
    scanf("%d",&segundos);
    minutos = segundos / 60;
    horas = minutos / 60;
    minutosReal = minutos % 60;
    segundosReal = segundos % 60;
    printf("A hora e de %d:%d:%d ", horas, minutosReal, segundosReal);
    return 0;
}
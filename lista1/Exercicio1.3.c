/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;
    printf("Digite as tres notas do aluno: \n");
    scanf("%f",&nota1);
    scanf("%f",&nota2);
    scanf("%f",&nota3);
    media = (nota1 + nota2 + nota3)/3;
    printf("A media do aluno foi de %f pontos", media);
    return 0;
}
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    int A, B, C;
    printf("Digite o tamanho do lado A do tirangulo: \n");
    scanf("%d", &A);
    printf("Digite o tamanho do lado B do tirangulo: \n");
    scanf("%d", &B);
    printf("Digite o tamanho do lado C do tirangulo: \n");
    scanf("%d", &C);
    if(A + B > C & C + B > A & A + C > B){
        if(A == B & A == C){
            printf("O triangulo e equilatero");
        } else if(A != B & A != C){
            printf("O triangulo e escaleno");
        } else{
            printf("O triangulo e isoceles");
        };
    } else {
        printf("Triangulo invalido");
    };
    return 0;
}
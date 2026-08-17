/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    int ano;
    printf("Digite o ano: \n");
    scanf("%d", &ano);
    if(ano % 4 == 0 & ano % 100 != 0){
        printf("O ano e bissexto");
    } else if(ano % 400 == 0){
        printf("O ano e bissexto");
    } else {
        printf("O ano nao e bissexto");
    };
    return 0;
}
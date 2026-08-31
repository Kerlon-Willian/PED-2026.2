/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    int N, i, quantia, sapos, ratos, coelhos, total;
    char tipo;
    sapos = 0;
    ratos = 0;
    coelhos = 0;
    printf("Digite a quantidade de experimentos: \n");
    scanf("%d", &N);
    for(i = 1; i <= N; i++){
        printf("Digite a quantidade e o tipo de cobaia: \n");
        scanf("%d %c", &quantia, &tipo);
        if(tipo == 'S'){
            sapos = sapos + quantia;
        } else if(tipo == 'R'){
            ratos = ratos + quantia;
        } else if(tipo == 'C'){
            coelhos = coelhos + quantia;
        };
    };
    total = sapos + ratos + coelhos;
    printf("Total de cobaias: %d \n", total);
    printf("Total de sapos: %d (%.2f%%) \n", sapos, (float) sapos * 100 / total);
    printf("Total de ratos: %d (%.2f%%) \n", ratos, (float) ratos * 100 / total);
    printf("Total de coelhos: %d (%.2f%%) \n", coelhos, (float) coelhos * 100 / total);
    return 0;
}
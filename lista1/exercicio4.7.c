/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int tamanhoSequenciaCollatz(int n){
    long valor;
    int passos;
    valor = n;
    passos = 0;
    while(valor != 1){
        if(valor % 2 == 0){
            valor = valor / 2;
        } else {
            valor = 3 * valor + 1;
        };
        passos = passos + 1;
    };
    return passos;
}

int main(){
    int n, i, tamanho, maiorTamanho, numero;
    printf("Digite o valor de n: \n");
    scanf("%d", &n);
    maiorTamanho = 0;
    numero = 1;
    for(i = 1; i <= n; i++){
        tamanho = tamanhoSequenciaCollatz(i);
        if(tamanho > maiorTamanho){
            maiorTamanho = tamanho;
            numero = i;
        };
    };
    printf("O numero %d gera a maior sequencia com %d passos", numero, maiorTamanho);
    return 0;
}
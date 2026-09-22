#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int *adiciona_valor(int *v, int tamanho, int valor, int pos){
    int i;
    if(pos >= tamanho){
        v = (int *) realloc(v, (pos + 1) * sizeof(int));
        for(i = tamanho; i < pos; i++){
            v[i] = 0;
        }
    }

    v[pos] = valor;
    return v;
}

int main() {
    int *v = (int *) calloc(1, sizeof(int));
    int num, n, pos, stop;
    n = 1;
    while (true){
        printf("digite um numero pro array: ");
        scanf("%d", &num);
        printf("qual posicao: ");
        scanf("%d", &pos);
        v = adiciona_valor(v, n, num, pos);
        if(pos >= n){
            n = pos + 1;
        }

        printf("%d 
", v[pos]);

        printf("parar? 1/S 0/N: ");
        scanf("%d", &stop);
        if(stop == 1){
            break;
        }
    }
    free(v);
}

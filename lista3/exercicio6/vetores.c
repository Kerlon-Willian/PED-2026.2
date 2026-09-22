#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FALSE 0
#define TRUE 1

int *aloca(int n, int preenche){
    int *v;
    if(preenche == TRUE){
        v = (int *) calloc(n, sizeof(int));
    } else {
        v = (int *) malloc(n * sizeof(int));
    }
    return v;
}

void imprime(int *v, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", *(v + i));
    }
    printf("
");
}

void preenche(int *v, int n, int valor, int is_aleatorio){
    int i;
    for(i = 0; i < n; i++){
        if(is_aleatorio == TRUE){
            *(v + i) = rand() % 101;
        } else {
            *(v + i) = valor;
        }
    }
}

int main() {
    int *v1, *v2;
    int n = 5;
    srand(time(NULL));
    v1 = aloca(n, FALSE);
    v2 = aloca(n, TRUE);
    printf("v1: ");
    imprime(v1, n);
    printf("v2: ");
    imprime(v2, n);
    preenche(v1, n, 0, TRUE);
    preenche(v2, n, 100, FALSE);
    printf("v1: ");
    imprime(v1, n);
    printf("v2: ");
    imprime(v2, n);
    free(v1);
    free(v2);
}

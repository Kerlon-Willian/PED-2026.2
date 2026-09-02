#include <stdio.h>

/*
decrescente(5,5)  -> imprime 5                      -> 5
decrescente(5,6)  -> imprime 6, decrescente(5,5)    -> 6,5
decrescente(5,7)  -> imprime 7, decrescente(5,6)    -> 7,6,5
decrescente(5,8)  -> imprime 8, decrescente(5,7)    -> 8,7,6,5
decrescente(5,9)  -> imprime 9, decrescente(5,8)    -> 9,8,7,6,5
decrescente(5,10) -> imprime 10, decrescente(5,9)   -> 10,9,8,7,6,5
*/

void decrescente(int a, int b){
    if (a == b){
        printf("%d", a);
    } else {
        printf("%d,", b);
        decrescente(a, b - 1);
    };
}

int main(){
    int a, b;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    decrescente(a, b);
}

#include <stdio.h>

/*
crescente(10,10) -> imprime 10                   -> 10
crescente(9,10)  -> imprime 9, crescente(10,10)  -> 9,10
crescente(8,10)  -> imprime 8, crescente(9,10)   -> 8,9,10
crescente(7,10)  -> imprime 7, crescente(8,10)   -> 7,8,9,10
crescente(6,10)  -> imprime 6, crescente(7,10)   -> 6,7,8,9,10
crescente(5,10)  -> imprime 5, crescente(6,10)   -> 5,6,7,8,9,10
*/

void crescente(int a, int b){
    if (a == b){
        printf("%d", b);
    } else {
        printf("%d,", a);
        crescente(a + 1, b);
    };
}

int main(){
    int a, b;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    crescente(a, b);
}

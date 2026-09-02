#include <stdio.h>

/*
soma(1) -> return 1           -> 1
soma(2) -> return 2 + soma(1) -> 2 + 1 = 3
soma(3) -> return 3 + soma(2) -> 3 + 3 = 6
soma(4) -> return 4 + soma(3) -> 6 + 4 = 10
soma(5) -> return 5 + soma(4) -> 10 + 5 = 15
soma(6) -> return 6 + soma(5) -> 15 + 6 = 21
soma(7) -> return 7 + soma(6) -> 21 + 7 = 28
*/

int soma(int n){
    if (n == 1){
        return 1;
    } else {
        return soma(n-1) + n;
    };
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("O resultado deu: %d", soma(n));
}
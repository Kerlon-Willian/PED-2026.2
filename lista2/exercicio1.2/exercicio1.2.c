#include <stdio.h>

/*
soma(1) -> return 1           -> 1
soma(2) -> return 2 * soma(1) -> 2 * 1 = 2
soma(3) -> return 3 * soma(2) -> 2 * 3 = 6
soma(4) -> return 4 * soma(3) -> 6 * 4 = 24
soma(5) -> return 5 * soma(4) -> 24 * 5 = 120
soma(6) -> return 6 * soma(5) -> 120 * 6 = 720
soma(7) -> return 7 * soma(6) -> 720 * 7 = 5040
*/

int soma(int n){
    if (n == 1){
        return 1;
    } else {
        return soma(n-1) * n;
    };
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("O resultado deu: %d", soma(n));
}
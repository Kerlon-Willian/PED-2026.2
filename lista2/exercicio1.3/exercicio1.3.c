#include <stdio.h>

/*
soma(1) -> return 1           -> 1
soma(2) -> return 3 * soma(1) -> 3 * 1 = 3
soma(3) -> return 3 * soma(2) -> 3 * 3 = 9
soma(4) -> return 3 * soma(3) -> 9 * 3 = 27
soma(5) -> return 3 * soma(4) -> 27 * 3 = 81
soma(6) -> return 3 * soma(5) -> 81 * 3 = 243
*/

int soma(int n){
    if (n == 1){
        return 1;
    } else {
        return soma(n-1) * 3;
    };
}

int main(){
    int n;
    printf("Digite um numero da sequencia: ");
    scanf("%d", &n);
    printf("O resultado deu: %d", soma(n));
}

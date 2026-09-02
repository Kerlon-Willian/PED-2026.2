#include <stdio.h>

/*
somaD(0)      -> return 0                          -> 0
somaD(9)      -> return 9 % 10                     -> 9
somaD(98)     -> return 98 % 10 + somaD(9)         -> 9 + 8 = 17
somaD(987)    -> return 987 % 10 + somaD(98)       -> 17 + 7 = 24
somaD(9876)   -> return 9876 % 10 + somaD(987)     -> 24 + 6 = 30
somaD(98765)  -> return 98765 % 10 + somaD(9876)   -> 30 + 5 = 35
somaD(987654) -> return 987654 % 10 + somaD(98765) -> 35 + 4 = 39
*/

int somaD(int n){
    if (n < 1){
        return 0;
    } else {
        return n % 10 + somaD(n/10);
    };
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("a soma de digitos e: %d", somaD(n));
}

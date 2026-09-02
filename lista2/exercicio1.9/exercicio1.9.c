#include <stdio.h>

/*
dec2bin(1)  -> imprime 1                        -> 1
dec2bin(3)  -> dec2bin(1), imprime 3 % 2 = 1    -> 11
dec2bin(6)  -> dec2bin(3), imprime 6 % 2 = 0    -> 110
dec2bin(13) -> dec2bin(6), imprime 13 % 2 = 1   -> 1101
*/

void dec2bin(int n){
    if (n < 2){
        printf("%d", n);
    } else {
        dec2bin(n / 2);
        printf("%d", n % 2);
    };
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    dec2bin(n);
}

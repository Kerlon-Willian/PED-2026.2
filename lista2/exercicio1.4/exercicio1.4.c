#include <stdio.h>

/*
quant(9)      -> return 1                -> 1
quant(98)     -> return 1 + quant(9)     -> 1 + 1 = 2
quant(987)    -> return 1 + quant(98)    -> 1 + 2 = 3
quant(9876)   -> return 1 + quant(987)   -> 1 + 3 = 4
quant(98765)  -> return 1 + quant(9876)  -> 1 + 4 = 4
quant(987654) -> return 1 + quant(98765) -> 1 + 5 = 6
*/

int quant(int n){
    if (n < 10){
        return 1;
    } else {
        return 1 + quant(n / 10);
    };
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("a quantidade de digitos e: %d", quant(n));
}

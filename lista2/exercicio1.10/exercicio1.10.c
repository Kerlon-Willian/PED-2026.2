#include <stdio.h>

/*
josefo(1,2) -> return 0                       -> 0
josefo(2,2) -> return (josefo(1,2) + 2) % 2   -> (0 + 2) % 2 = 0
josefo(3,2) -> return (josefo(2,2) + 2) % 3   -> (0 + 2) % 3 = 2
josefo(4,2) -> return (josefo(3,2) + 2) % 4   -> (2 + 2) % 4 = 0
josefo(5,2) -> return (josefo(4,2) + 2) % 5   -> (0 + 2) % 5 = 2
*/

int josefo(int n, int k){
    if (n == 1){
        return 0;
    } else {
        return (josefo(n - 1, k) + k) % n;
    };
}

int main(){
    int n, k;
    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &n);
    printf("Digite o valor de k: ");
    scanf("%d", &k);
    printf("O sobrevivente e: %d", josefo(n, k));
}

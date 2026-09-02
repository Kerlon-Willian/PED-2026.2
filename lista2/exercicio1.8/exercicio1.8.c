#include <stdio.h>
#include <string.h>

/*
arara:
isPalindromo(arara,2,2) -> inicio >= fim                        -> 1
isPalindromo(arara,1,3) -> r == r, isPalindromo(arara,2,2)      -> 1
isPalindromo(arara,0,4) -> a == a, isPalindromo(arara,1,3)      -> 1

arada:
isPalindromo(arada,1,3) -> r != d                               -> 0
isPalindromo(arada,0,4) -> a == a, isPalindromo(arada,1,3)      -> 0
*/

int isPalindromo(char palavra[], int inicio, int fim){
    if (inicio >= fim){
        return 1;
    } else if (palavra[inicio] != palavra[fim]){
        return 0;
    } else {
        return isPalindromo(palavra, inicio + 1, fim - 1);
    };
}

int main(){
    char palavra[50];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    printf("O resultado deu: %d", isPalindromo(palavra, 0, strlen(palavra) - 1));
}

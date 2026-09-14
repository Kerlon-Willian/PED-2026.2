#include <stdio.h>
#include <stdlib.h>

int main(){
    int i2, i;
    char vetor[100];
    char * vetorD;

    printf("digite uma palavra ");
    scanf("%s", vetor);
    
    while(vetor[i2] != '\0'){
        i2++;
    };

    vetorD = (char *) malloc(i2 * sizeof(char));

    i = 0;
    while (i != i2){
        vetorD[i] = vetor[i];
        i++;
    };

    printf("%s e %s", vetorD, vetor);
}

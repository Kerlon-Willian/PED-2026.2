/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    int s1 = 7, s2 = 3, s3 = 1;
    int p1, p2, p3, chance;
    char c1, c2, c3;
    for(chance = 1; chance <= 10; chance++){
        printf("==== Chance %d ==== \n", chance);
        printf("Palpite: \n");
        scanf("%d %d %d", &p1, &p2, &p3);
        if(p1 == s1){
            c1 = '+';
        } else if(p1 == s2 || p1 == s3){
            c1 = '!';
        } else {
            c1 = '_';
        };
        if(p2 == s2){
            c2 = '+';
        } else if(p2 == s1 || p2 == s3){
            c2 = '!';
        } else {
            c2 = '_';
        };
        if(p3 == s3){
            c3 = '+';
        } else if(p3 == s1 || p3 == s2){
            c3 = '!';
        } else {
            c3 = '_';
        };
        printf("Saida: %c%c%c \n", c1, c2, c3);
        if(p1 == s1 && p2 == s2 && p3 == s3){
            printf("Parabens! Voce acertou!");
            return 0;
        };
    };
    printf("Suas chances acabaram. O numero era %d%d%d", s1, s2, s3);
    return 0;
}
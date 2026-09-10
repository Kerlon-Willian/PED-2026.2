#include <stdio.h>
#include <stdlib.h>
int mudar(int *x, int *y){
    if(*y < *x){
        *y = *x + *y;
        *x = *y - *x;
        *y = *y - *x;
    };
}

int main(){
    int x, y;
    x = 2;
    y = 5;
    mudar(&x, &y);
    printf("%d %d", x, y);
}
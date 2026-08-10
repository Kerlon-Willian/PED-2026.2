/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    float C, F;
    printf("Digite a temperatura em celcius: \n");
    scanf("%f",&C);
    F = C * 9.0/5.0 + 32;
    printf("%f celcius em fahrenheit = %f =", C, F);
    return 0;
}
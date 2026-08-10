/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main(){
    float raio, area;
    printf("Digite o raio do circulo: \n");
    scanf("%f",&raio);
    area = M_PI * raio * raio;
    printf("A area do circulo e: %f", area);
    return 0;
}
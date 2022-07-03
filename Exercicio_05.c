//Elabore um programa que calcule a área de um trapézio.

#include<stdio.h>
#include<windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float base1, base2, h, area;

    printf("Insira o valor da base1: ");
    scanf("%f", &base1);
    printf("\nInsira o valor da base2: ");
    scanf("%f", &base2);
    printf("\nInsira o valor da altura: ");
    scanf("%f", &h);

    area = ((base1 + base2) * h) / 2;

    printf("\nA área do trapézio é %.2f", area);

    return(0);
}
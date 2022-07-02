//Elabore um programa que receba quatro notas e calcule a média aritmética entre elas.

#include<stdio.h>
#include<windows.h>

main()
{
    SetConsoleOutputCP(CP_UTF8);
    
    float num1, num2, num3, num4, media;

    printf("Insira a primeira nota: ");
    scanf("%f", &num1);
    printf("\nInsira a segunda nota: ");
    scanf("%f", &num2);
    printf("\nInsira a terceira nota: ");
    scanf("%f", &num3);
    printf("\nInsira a quarta nota: ");
    scanf("%f", &num4);

    media = (num1 + num2 + num3 + num4)/4;

    printf("\nA média aritmética entre as notas inseridas é: %.2f", media);

    return(0);
}
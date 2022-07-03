//Faça um programa que leia um número e informe se ele é divisível por cinco.
#include<stdio.h>
#include<windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int numero;

    printf("Insira o número: ");
    scanf("%d", &numero);
    if(numero % 5 == 0)
        printf("%d é divisível por cinco.", numero);
    else
        printf("%d não é divisível por cinco.", numero);
    
    return(0);
}
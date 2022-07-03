// Escreva um programa que leia um número inteiro e apresente seu antecessor e seu sucessor.

#include<stdio.h>
#include<Windows.h>

int main()
{
    int numero, antecessor, sucessor;

    SetConsoleOutputCP(CP_UTF8);

    printf("Número: ");
    scanf("%d", &numero);

    antecessor = numero - 1;
    sucessor = numero + 1;

    printf("\nO antecessor de %d é: %d", numero, antecessor);
    printf("\nO sucessor de %d é: %d", numero, sucessor);
}
/*Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e apresente o valor do
rendimento e o valor total.*/

#include<stdio.h>
#include<Windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    float deposito, taxa, rendimento, total;

    printf("Insira o valor do depósito: ");
    scanf("%f", &deposito);
    printf("\nInsira o valor da taxa de juros: ");
    scanf("%f", &taxa);

    rendimento = (taxa / 100) * deposito;
    total = deposito + rendimento;

    printf("\nO valor do rendimento é R$%.2f e o valor total é R$%.2f.", rendimento, total);

    return(0);
}
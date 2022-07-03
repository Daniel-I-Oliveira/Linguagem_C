/*Escreva um programa que receberá dois números, calcule e apresente o resultado do primeiro número elevado ao 
segundo.*/

#include<stdio.h>
#include<math.h>
#include<windows.h>

int main()
{
SetConsoleOutputCP(CP_UTF8);

int num1, num2, resultado;

printf("Insira o primeiro número: ");
scanf("%d", &num1);
printf("\nInsira o segundo número: ");
scanf("%d", &num2);

resultado = pow(num1,num2);

printf("\n%d elevado a %d é igual a %d.", num1, num2, resultado);

return(0);
}
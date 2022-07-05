/* Elabore um algoritmo que receba altura e sexo de uma pessoa e calcule e imprima o seu peso ideal, sabendo 
que:
Para homens: (72.7 * altura) - 58
Para mulheres: (62.1 * altura) - 44.7 */

#include<stdio.h>
#include<windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float altura, PesoIdeal;
    char sexo;

    printf("Informe seu sexo (M/F): ");
    scanf("%c", &sexo);
    printf("\nInforme sua altura: ");
    scanf("%f", &altura);

    if (sexo == 'M')
    {
        PesoIdeal = (72.7 * altura) - 58;
        printf("\n\nSeu peso ideal é: %.2f", PesoIdeal);
    }
        else
        {
            PesoIdeal = (62.1* altura) - 44.7;
            printf("\n\nSeu peso ideal é: %.2f", PesoIdeal);
        }
    return(0);
}
/*Construa um programa que receba a idade de uma pessoa e identifique sua classe eleitoral: não eleitor (menos 
que 16 anos de idade), eleitor obrigatório (entre 18 e 65 anos) e eleitor facultativo (entre 16 e 18 anos ou 
mais que 65 anos). */

#include<stdio.h>
#include<windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int idade;

    printf("Insira sua idade: ");
    scanf("%d", &idade);

    if (idade < 16)
    {
        printf("\n\nVocê não é eleitor.");
    }
        else
        {
            if ((idade >= 18) && (idade <=65))
            {
                printf("\n\nVocê é eleitor.");
            }
            else
            {
                if ((idade >=16) && (idade < 18) || (idade > 65))
                {
                    printf("\n\nVocê é eleitor facultativo.");
                }
            }
        }
return(0);
}
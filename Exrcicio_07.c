/* Elabore um programa que receba o nome e a idade de uma pessoa e informe o nome, a idade e o valor da 
mensalidade do plano de saúde.

Até 18 anos: R$ 50,00
De 19 a 29 anos: R$ 70,00
De 30 a 45 anos: R$ 90,00
De 46 a 65 anos: R$ 130,00
Acima de 65 anos: R$ 170,00 */

#include<stdio.h>
#include<windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    
    char nome[30];
    int idade;

    printf("Informe o nome: ");
    scanf("%s", nome);
    printf("\nInforme a idade: ");
    scanf("%d", &idade);

    printf("\n\nNome: %s", nome);
    printf("\nIdade: %d", idade);
    if (idade <= 18)
    {
        printf("\nO valor do plano é: R$ 50,00");
    }
        else
        {
            if ((idade >=19) && (idade <= 29))
            {
                printf("\nO valor do plano é: R$ 70,00");
            }
                else
                {
                    if ((idade >= 30) && (idade <= 45))
                    {
                        printf("\nO valor do plano é: R$ 90,00");
                    }
                        else
                        {
                            if ((idade >= 46) && (idade <= 65))
                            {
                                printf("\nO valor do plano é: R$ 130,00");
                            }
                                else
                                {
                                    if (idade >= 66)
                                    {
                                        printf("\nO valor do plano é: R$ 170,00");
                                    }
                                }
                        }
                }
        }

return(0);
}
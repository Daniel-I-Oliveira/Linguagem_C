#include<stdio.h>
#include<windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int opcao;
    float total;

    total = 0;

    printf("1 - Italiano, 2 - Japonês, 3 - Salvadorenho");
    printf("\nInforme o prato desejado: ");
    scanf("%d", &opcao);
    
    switch (opcao)
    {
    case 1: total = total + 750;
        break;
    case 2: total = total + 324;
        break;
    case 3: total + total + 545;
        break;
    }
    
    printf("\n1 - Chá, 2 - Suco de laranja, 3 - Refrigerante");
    printf("\nInforme a bebida desejada: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1: total = total + 30;
        break;
    case 2: total = total + 80;
        break;
    case 3: total = total + 90;
        break;
    }

    printf("\n\nO total de calorias é: %.2f", total);
    return(0);
}
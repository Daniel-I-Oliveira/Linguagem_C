#include<stdio.h>
#include<windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int par, impar, num;
    
    par = 0;
    impar = 0;
    
    printf("Informe o número: ");
    scanf("%d", &num);
    
    while(num!=0)
    {
            if(num % 2 == 0)
                par++;
            else
                impar++;
        
        printf("\nInforme o número: ");
        scanf("%d", &num);   
    }
    printf("\n\nA quantidade de par e: %d", par);
    printf("\nA quantidade de impar é: %d", impar);

    return(0);
}
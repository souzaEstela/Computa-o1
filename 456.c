#include <stdio.h>

int ehBissexto(int ano)
{

    if ((ano % 4  == 0) && (ano % 100 != 0 || ano % 400 == 0))
    {
        return 1;

    }

    return 0;
}

int main()
{
    int ano;

    printf("Informe um ano: ");
    scanf("%d", &ano);

    int resultado = ehBissexto(ano);
    printf("%d\n", resultado);


    if (resultado == 1)
    {
        printf("%d é um ano bissexto.\n", ano);
    }
    else
    {
        printf("%d não é um ano bissexto.\n", ano);
    }
    return 0;
}

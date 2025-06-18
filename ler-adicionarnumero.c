#include <stdio.h>

int main()
{
    FILE *arquivo;
    float n, total = 0;

    arquivo = fopen("teste2.txt", "r");

    if (!arquivo)
    {
        printf("Caminho errado!");
        return 1;
    }


    while(fscanf(arquivo,"%f", &n) != EOF)
    {
        printf("Numeros: %.2f\n", n);
        total += n;
    }

    printf("Total: %.2f\n", total);

    fclose(arquivo);
    return 0;
}
---------------------------------------------------------------
#include <stdio.h>

int main()
{
    FILE *arquivo;
    float n[52];

    arquivo = fopen("teste2.txt", "a");

    if (!arquivo)
    {
        printf("Caminho errado!");
        return 1;
    }

    printf("Escolha um novo numero: ");
    fgets( n, sizeof(n), stdin);

    fputs(n,arquivo);

    fclose(arquivo);
    printf("Adicionado");

    return 0;
}

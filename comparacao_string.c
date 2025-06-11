#include <stdio.h>
#include <string.h>

int main()
{
    char nomes[3][101];
    char entrada[101];

    printf("Digite 3 nomes para comparar:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Digite o nome %d: ", i + 1);
        fgets(nomes[i], sizeof(nomes[i]), stdin);
    }

    while (1)
    {
        printf("Digite um nome: ");
        fgets(entrada, sizeof(entrada), stdin);

        if (strcmp(entrada, nomes[0]) == 0 || strcmp(entrada, nomes[1]) == 0 || strcmp(entrada, nomes[2]) == 0)
        {
            printf("-----------------------------\n");
            printf("Este nome esta na lista.\n");

            break;
        }
        else
        {
            printf("-----------------------------\n");
            printf("Este nome nao esta na lista.\n");
            printf("-----------------------------\n");
        }
    }

    printf("-----------------------------\n");
    return 0;
}

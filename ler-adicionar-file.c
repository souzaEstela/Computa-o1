- lê o arquivo e imprime seu conteúdo 

#include <stdio.h>

int main()
{
    FILE * arquivo;
    char conteudo[300];

    arquivo = fopen("teste1.txt", "r");

    if (arquivo == NULL)
    {
        printf("Caminho errado!");
        return 1;
    }

    while(fgets(conteudo,sizeof(conteudo),arquivo))
    {
        printf("%s\n", conteudo);
    }

    int resultado = fclose(arquivo);

    if (resultado == EOF)
    {
        printf("Deu problema!");
        return 1;
    }
    
    fclose(arquivo);
    return 0;
}
  ------------------------------------------------------ outro arquivo -----------------------------------------
- adiciona uma nova linha
    #include <stdio.h>

int main()
{
    FILE *arquivo;
    char nova[52];

    arquivo = fopen("teste1.txt", "a");

    if (arquivo == NULL)
    {
        printf("Caminho errado");
        return 1;
    }

    printf("Qual o novo endereco: ");
    fgets(nova,sizeof(nova),stdin);

    fputs(nova,arquivo);

    fclose(arquivo);
    printf("Adicionado");

    return 0;
}

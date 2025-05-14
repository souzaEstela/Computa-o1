#include<stdio.h>
#define TAMANHO 5

int main() {
    int vetor[TAMANHO + 1];
    int i, novo, existe;

    srand(time(NULL));

    for (i = 0; i < TAMANHO; i++) {
        vetor[i] = rand() % 50;
    }

    printf("Vetor inicial:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    do {
        existe = 0;
        printf("Digite um valor: ");
        scanf("%d", &novo);

        for (i = 0; i < TAMANHO; i++) {
            if (vetor[i] == novo) {
                existe = 1;
                break;
            }
        }

        if (existe) {
            printf("O valor já está no vetor. Digite outro valor.\n");
        }

    } while (existe);

    vetor[TAMANHO] = novo;

    printf("Vetor atualizado:\n");
    for (i = 0; i < TAMANHO + 1; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

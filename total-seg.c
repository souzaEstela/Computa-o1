#include<stdio.h>

void convertehora(int total, int* hora, int* min, int* seg);

int main()
{
    int total, hora, min, seg;

    printf("Informe o total segundos: ");
    scanf("%d", &total);

    printf("O total de segundo e: %d\n", total);

    convertehora(total,&hora, &min, &seg);
    printf("%d horas, %d minutos e %d segundos", hora, min, seg);

    return 0;
}

void convertehora(int total, int* hora, int* min, int* seg)
{
    *hora = total / 3600;
    *min = (total % 3600) / 60;
    *seg = total % 60;
}

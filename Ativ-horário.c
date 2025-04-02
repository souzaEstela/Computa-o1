#include<stdio.h>
int main(){

    int hora, min, seg;
    float aux = 5.5;

    printf("Digite hora, minuto e segundo: ");
    scanf("%d %d %d", &hora, &min, &seg);

    if(hora>1 && min>15){
        float sis = ((hora*3600)+(min*60)+seg);
        printf("Quantidade de segundos: %f\n", sis);
    }
    else{
        float mis = ((hora*60)+min+(seg/(60)));
        printf("Quantidade de minutos: %.5f\n",mis);
    }

    printf("Horario: %02d:%02d:%02d\n", hora, min, seg);
    printf("Float com duas casas: %.2f", aux);

    return 0;
}

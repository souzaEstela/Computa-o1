#include<math.h>
#include<stdio.h>
int main(){

float a, l, area, tinta;

printf("Escreva, em metros, a altura: ");
scanf ("%f", &a);
printf("Escreva, em metros, a largura: ");
scanf ("%f", &l);

area = a * l;
tinta = ceil(area/2) ;

printf("A area da parede e de %.1f m²\n", area);
printf("A quantidade de tinta necessária e de %.1f litros", tinta);
return 0;
}

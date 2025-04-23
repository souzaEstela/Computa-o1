#include<math.h>
#include<stdio.h>
int main()
{

    int num, tab, i;

    printf("Escolha um número: ");
    scanf ("%d", &num);

    for (i = 1 ; i <= 10; i++){
        tab = num*i;
        printf("%d x %d = %d \n", num, i, tab);
    }

    return 0;
}

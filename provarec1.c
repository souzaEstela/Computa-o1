#include<math.h>
#include<stdio.h>
int main()
{

    int num, i, tab;

    printf("Escolha um número: ");
    scanf ("%d", &num);

    if (num !=0)
    {
        for (i = 1 ; i <= num; i++)
        {
            if(i%2 == 0){
            printf("%d\n", i);
            }

        }
    }

    else printf("%d", num);

    return 0;
}

#include <stdio.h>

int arredonda(float x)
{

    if (x > 0)
    {

        if (x - (int)x >= 0.5)
        {
            return (int)x + 1;
        }

        return (int)x;
    }

    else {
        if (x - (int)x <= -0.5){
        return (int)x - 1;
        }

        return (int)x;
    }
}


int main()
{

    float x;

    printf("Informe um numero nao inteiro: ");
    scanf("%f", &x);

    printf("O num arredondado é %d\n", arredonda(x));

    return 0;
}

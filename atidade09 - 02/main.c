#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso;
    int idade;
    printf("Digite seu peso ");
    scanf("%f", &peso);
    printf("Digite sua idade ");
    scanf("%d", &idade);
    if ((peso<=50.0)&& (idade<=17))
    {
        printf("Insuficiente para participar");
    }
    if ((peso<=50.0)&& (idade>17))
    {
        printf("Voce se encaixa em MINI");
    }
    if ((peso>50.0) && (idade<17))
    {
        printf("\n Voce se encaixa em JUNIOR");
    }
    if ((peso>50) && (idade>17))
    {
        printf("\ Voce se encaixa em PLENO");
    }
    return 0;
}

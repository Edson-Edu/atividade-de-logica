#include <stdio.h>
#include <stdlib.h>

int main()
{

    float v1, v2, v3;
    char Ch, a, b, c, d, e;
    printf("Digite o primeiro valor: ");
    scanf("%f", &v1);
    printf("Digite um caractere da sua expressao matematica (*, +, - ou /): ");
    scanf(" %c",&Ch);
    printf("Digite o segundo valor: ");
    scanf("%f", &v2);
    a='+';
    b='-';
    c='/';
    d='*';
    if(Ch == a)
    {
        v3= v1+v2;
        printf("O resultado eh: %f", v3);
    }
    if(Ch == b)
    {
        v3= v1-v2;
        printf("O resultado eh: %f", v3);
    }
    if(Ch == c)
    {
        v3= v1/v2;
        printf("O resultado eh: %f", v3);
    }
    if(Ch == d)
    {
        v3= v1*v2;
        printf("O resultado eh: %f", v3);
    }

    return 0;
}

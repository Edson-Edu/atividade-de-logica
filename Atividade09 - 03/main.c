#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Digite o primeiro valor ");
    scanf("%d", &a);
    printf("Digite o segundo valor ");
    scanf("%d", &b);
    printf("Digite o terceiro valor ");
    scanf("%d", &c);
    if (a<b && a<c)
    {
        printf(" \n ordem: %d", a); /* aqui vai ficar a ordem A, B, C. E A, C, B */
        if (b<c)
        {
            printf("%d %d", b, c);
        }
        if (!(b<c))
        {
            printf("%d %d", c, b);
        }
    }
    if (b<a && b<c ) /* aqui vai ficar a ordem B, A, C. E B, C, A */
    {
        printf(" \n a ordem: %d", b );
        if (a<c)
        {
            printf("%d %d", a, c);
        }
        if (!(a<c))
        {
            printf("%d %d", c,a);
        }
    }
    if (c<a && c<b) /* aqui fica a ordem C, A, B e C,B,A */
    {
        printf(" \n a ordem: %d", c);
        if (a<b)
        {
            printf("%d %d", a, b);
        }
        if (!(a<b))
        {
            printf("%d %d", b, a);
        }

    }
    if ( a==b && c==b)
    {
        printf("\n São iguais ");
        printf("%d %d %d", a, b, c);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    char triangulo[30];
    printf("Digite o valor valor: ");
    scanf("%d", &a);
    printf("Digite o valor valor: ");
    scanf("%d", &b);
    printf("Digite o valor valor: ");
    scanf("%d", &c);
    if(a>0 && b>0 && c>0)
    {
        printf("\nSeus valores são positivos");
       if(!(a<(b+c) && b<(a+c) && c<(a+b)))
            {
                printf("\nMas nao e um triangulo");
            }
        if(a<(b+c) && b<(a+c) && c<(a+b))
        {

            if(a==b && c==b)
            {
                printf("\nO tipo do seu triangulo eh: equilatero");
            }
            if(a!=b && c!=b)
               {
                   printf("\nO tipo do seu triangulo eh: escaleno");
               }



            if(a==b || a==c || b==c) /* A for igual B ou C */
            {

                if(!(b==c && a==b))
                {
                    printf("\nO tipo do seu triangulo eh: Isosceles");
                }
            }
        }
    }
    else
    {
        printf("\n Seus valores são negativos");
    }

    return 0;
}

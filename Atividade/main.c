#include <stdio.h>
#include <stdlib.h>

int main()
{
    float atv, trab, av, md;
    char nome[30];
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite a sua nota do trabalho ");
    scanf("%f", &trab);
    printf("Digite sua nota da avaliacao ");
    scanf("%f", &av);
    printf("Digite sua nota das atividades ");
    scanf("%f", &atv);
    md= (atv+trab)+av /2;
    printf("Sua media eh %f", md);
    if(md>=6)
    {
        printf("\nParabens, vc passou");
    }
    if(md<6)
    {
        printf("\nQue pena, pelo menos vc tentou");
    }
    return 0;
}

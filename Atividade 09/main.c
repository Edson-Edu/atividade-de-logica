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
    md= (atv*0.2)+(trab*0.3)+(av*0.5);
    if(md>=6.0)
    {
        printf(" O aluno(a) %s, foi aprovado na disciplina com a media %f", nome, md);
    }
    if(md<6.0)
    {
        printf(" O aluno(a) %s, foi reprovado na disciplina com a media %f", nome, md);
    }
    return 0;
}

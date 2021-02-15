#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,nota,notamaior,notamenor,i;
    printf("Introduza o numero de alunos:");
    scanf("%i",&n);
    i=0;
    notamaior=0;
    notamenor=100;
    while(i<n){
        printf("Insira a nota do aluno:");
        scanf("%i",&nota);
        i=i+1;
        if(nota>notamaior)
            notamaior=nota;
        if(nota<notamenor)
            notamenor=nota;
    }
    printf("A maior nota da turma e: %d \n",notamaior);
    printf("A menor nota da turma e: %i \n",notamenor);

    return 0;
}

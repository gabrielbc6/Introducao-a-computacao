#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,aux,bin,resto,pot;
    printf("Entre com o numero decimal a ser convertido: ");
    scanf("%i",&n);
    pot=1;
    aux=n;
    bin=0;
    while(aux>0){
        resto=aux%2;
        aux/=2;
        bin=bin+resto*pot;
        pot*=10;
    }
    printf("O numero decimal %d em base binaria e %i",n,bin);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,fatorial;
    printf("Insira um numero inteiro nao-negativo: ");
    scanf("%i",&n);
    i=1;
    fatorial=1;
    while(i<n){
        i=i+1;
        fatorial=fatorial*i;
    }
    printf("O fatorial de %i e: %i \n",n,fatorial);
    return 0;
}

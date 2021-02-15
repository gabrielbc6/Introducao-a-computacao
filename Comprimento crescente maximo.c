#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,atual,anterior,i,max,aux;
    printf("Entre com o numero de elementos da sequencia: ");
    scanf("%d",&n);
    max=1;
    aux=1;
    printf("Introduza o primeiro elemento da sequencia: ");
    scanf("%d",&anterior);
    for(i=2;i<=n;i++){
        printf("Entre com o proximo elemento da sequencia: ");
        scanf("%d",&atual);
        if(atual>anterior){
            max++;
            if(aux<max)
                aux=max;
        }
        else
            max=1;
        anterior=atual;
    }
    printf("O comprimento crecente maximo e %d",aux);
    return 0;
}

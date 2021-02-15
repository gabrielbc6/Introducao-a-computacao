#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,resto,soma,potencia,atual,num;
    printf("Entre com o binario a ser convertido: ");
    scanf("%d",&n);
    potencia=1;
    i=1;
    soma=0;
    num=n;
    while(i<=num){
        resto=num%2;
        atual=potencia*resto;
        soma+=atual;
        potencia*=2;
        num=num/10;
    }
    printf("O numero binario %d e o numero decimal %i",n,soma);
    return 0;
}

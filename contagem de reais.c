#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,cont,vezes;
    float reais[100];
    printf("Entre com o numero de numeros da sequencia: ");
    scanf("%d",&n);
    printf("Entre com a sequencia: ");
    for(i=0;i<n;i++)
        scanf("%f",&reais[i]);
    printf("%f",reais[n+1]);
    for(i=0;i<n;i++){
        vezes=1;
        for(cont=i+1;cont<n;cont++){
            if(reais[cont]==reais[i]){
                vezes++;
                reais[cont]=reais[n+1];
            }
        }
        if(reais[i]!=reais[n+1])
            printf("O numero %f aparece %d vezes \n",reais[i],vezes);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k,sequencia[100],compmax[100],cont=0,cont2;
    printf("Entre com o numero de elementos da sequencia: ");
    scanf("%d",&n);
    printf("Entre com os elementos da sequencia: ");
    for(i=0;i<n;i++)
        scanf("%d",&sequencia[i]);
    cont2=1;
    for(i=1;i<n;i++){
        if(sequencia[i-1]<sequencia[i])
            cont2++;
        if(sequencia[i]<sequencia[i-1]){
            if(cont2>cont){
                cont=cont2;
                k=0;
                for(j=i-cont;j<i;j++){
                    compmax[k]=sequencia[j];
                    k++;
                }
            cont2=1;
            }
        }
    }
    if(cont2>cont){
        cont=cont2;
        k=0;
        for(j=i-cont;j<i;j++){
            compmax[k]=sequencia[j];
            k++;
        }
        cont2=1;
    }
    printf("A subsequecia de comprimento maximo %d e: ",cont);
    for(i=0;i<cont;i++)
        printf("%d ",compmax[i]);
    return 0;
}

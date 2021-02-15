#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,cont;
    float coeficientes[100],qdex[100],valordex[100];
    printf("Entre com o grau do polinomio e o numero de valores de alfa: ");
    scanf("%d %d",&n,&m);
    printf("Entre com os coeficientes do polinomio: ");
    for(i=0;i<=n;i++)
        scanf("%f",&coeficientes[i]);
    printf("Entre com os valores de alfa: ");
    for(i=0;i<m;i++)
        scanf("%f",&valordex[i]);
    for(i=0;i<m;i++){
        for(cont=0;cont<=n;cont++){
            if(cont==0)
                qdex[cont]=coeficientes[cont];
            else
                qdex[cont]=(qdex[cont-1]*valordex[i])+coeficientes[cont];
        }
            printf("Os coeficientes de q de x sao: ");
            for(cont=0;cont<n;cont++)
                printf("%f\n",qdex[cont]);
    }
    return 0;
}

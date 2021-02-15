#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float distancia[100],x,y,x1,y1;
    int n,i,cont;
    printf("Entre com o numero de pontos e o ponto de referencia: ");
    scanf("%d %f %f",&n,&x,&y);
    for(i=0;i<n;i++){
        printf("Entre com um ponto: ");
        scanf("%f %f",&x1,&y1);
        distancia[i]=sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
    }
    printf("Os raios das circunferencias sao:\n");
    for(cont=0;cont<n;cont++){
        for(i=cont+1;i<n;i++){
            if(distancia[i]==distancia[cont])
                distancia[i]=-1;
        }
        if(distancia[cont]>=0)
            printf("%f\n",distancia[cont]);
    }
    return 0;
}

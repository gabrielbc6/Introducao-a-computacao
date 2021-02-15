#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

int main()
{
    int pop1,pop2,anos,pop,haha;
    float x,y,fat1,fat2,z;
    printf("Entre com a populaçao de uaua e ny, respectivamente: ");
    scanf("%d %d",&pop1,&pop2);
    printf("Entre com as taxas de crescimento anual(em %%), respectivamente: ");
    scanf("%f %f",&x,&y);
    haha=FALSE;
    anos=0;
    if(pop2>pop1){
        pop=pop1;
        pop1=pop2;
        pop2=pop;
        z=x;
        x=y;
        y=z;
    }
    fat1=1+x/100.0;
    fat2=1+y/100.0;
    printf("%f %f \n",fat1,fat2);
    if(x>=y)
        haha=FALSE;
    else{
        haha=TRUE;
        while(pop1>pop2){
            pop1*=fat1;
            pop2*=fat2;
            anos++;
        }
    }
    if(haha=FALSE)
        printf("A populacao menor nao ultrapassa a populacao maior ");
    if(haha=TRUE)
        printf("A populaçao da cidade menor ultrapassa a maior em %d anos",anos);
    return 0;
}

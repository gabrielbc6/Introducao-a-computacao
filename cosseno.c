#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,fat,ad1,ad2;
    float x,termo,nume;
    double soma;
    printf("Entre com o numero de termos da soma e o numerador: ");
    scanf("%d %f",&n,&x);
    soma=1;
    nume=1;
    fat=1;
    ad1=1;
    ad2=2;
    for(i=2;i<=n;i++){
        if(i%2==1){
            nume=nume*x*x;
            fat=fat*ad1*ad2;
            termo=nume/fat;
            soma+=termo;
            ad1=ad1+2;
            ad2=ad2+2;
        }
        else{
            nume=nume*x*x;
            fat=fat*ad1*ad2;
            termo=nume/fat;
            soma=soma-termo;
            ad1=ad1+2;
            ad2=ad2+2;
        }
    }
    printf("O cosseno de x e: %f",soma);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int pdivisor;
    int k;
    int i;
    k=0;
    printf("Divisores positivos de numeros triangulares \n" );
    printf("Introduza um numero natural: \n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
        {
        k += i;
        printf("%d: ", k);
        for(pdivisor=1;pdivisor<=k;pdivisor++)
        {
            if(k % pdivisor == 0)
                printf("%d ", pdivisor);
        }
        printf("\n");
    }

    return 0;
}

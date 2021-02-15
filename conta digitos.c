#include <stdio.h>
#include <stdlib.h>

int ContaDigitos(int n){
    int cont;
    if(n<10){
        cont=1;
        return cont;
    }
    else{
        cont=ContaDigitos(n/10);
        cont++;
    }
    return cont;
}

int main()
{
    int cont,n=1;
    cont=ContaDigitos(n);
    printf("%d",cont);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,cont,cont_num;
    printf ( "Entre com n>0: " ) ;
    scanf ( "%d" , &n ) ;
    printf ( "Entre com i>0: " ) ;
    scanf ( "%d" , &i ) ;
    printf ( "Entre com j>0: " ) ;
    scanf ( "%d" , &j ) ;
    cont = 0; cont_num = 0;
    while ( cont_num < n ) {
        if( cont % i == 0 || cont % j == 0) {
            printf ( "%d\n" , cont ) ;
            cont_num = cont_num + 1;
 }
    cont = cont + 1;
 }
    return 0;
}

 # include <stdio.h>
 # include <math.h>



int segundo_grau ( float a , float b , float c , float *x1 , float *x2 ) {
float delta= (b*b−4*a*c) ;

 if ( delta < 0) {
 return −1;
 }

 *x1 = (−b + sqrt ( delta )) / (2 * a ) ;
 *x2 = (−b − sqrt ( delta )) / (2 * a ) ;

 if ( delta > 0) {
 return 1 ;
 }
 else {
 return 0 ;
 }
 }

 int main ( ) {
 float a , b , c , r1 , r2 , tem ;

 printf( "Entre com os coeficientes a, b e c: " ) ;
 scanf( "%f %f %f" , &a , &b , &c ) ;


 tem = segundo_grau (a , b , c , &r1 , &r2 ) ;


 if ( tem < 0) {
 printf ( "Eq. sem raizes reais\n" ) ;
 }

 if ( tem == 0) {
 printf ( "Eq. tem somente uma raiz\n" ) ;
 printf ( "raiz = %f\n" , r1 ) ;
 }

 if ( tem > 0) {
 printf( "Eq. tem duas raizes distintas\n" ) ;
 printf( "Raizes %f e %f\n" , r1 , r2 ) ;
}

 return 0 ;
 }

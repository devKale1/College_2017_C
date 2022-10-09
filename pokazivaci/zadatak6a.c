#include <stdio.h>
void swap ( double *x, double *y ) ;

void poredaj(double *x, double *y, double *z) 
{
double pom;
    if (*x < *y) swap ( &(*x), &(*y)) ;
    if (*x < *z) swap ( &(*x), &(*z)) ;
    if (*y < *z) swap ( &(*y), &(*z)) ;
    
}

void swap ( double *x, double *y ) 
{
double pom;
       pom = *x ; 
        *x = *y; 
        *y = pom; 
}    


int main (void) {
double a = 1.0, b = 2.0, c = 3.0;
    poredaj(&a, &b, &c);
    printf("poredani su: %f %f %f\n", a, b, c);
return 0;
}

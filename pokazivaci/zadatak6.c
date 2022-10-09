#include <stdio.h>
void poredaj(double *x, double *y, double *z) 
{
double pom;
    if (*x < *y) 
    {
        pom = *x;
        *x = *y;
        *y = pom;
    }
    if (*x < *z) 
    {
        pom = *x;
        *x = *z;
        *z = pom;
    }
    if (*y < *z) 
    {
        pom = *y;
        *y = *z;
        *z = pom;
    }
}



int main (void) {
double a = 1.0, b = 2.0, c = 3.0;
    poredaj(&a, &b, &c);
    printf("poredani su: %f %f %f\n", a, b, c);
return 0;
}

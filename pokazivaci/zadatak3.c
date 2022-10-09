#include <stdio.h>
double uvecajZa10(double x) 
{
   return x + 10.;
}
/*int main (void) 
{
    double arg, rez;
    printf("Upisite realni broj: ");
    scanf("%lf", &arg);
    rez = uvecajZa10(arg);
    printf("%f uvecan za 10.0 jest %f\n", arg, rez);
return 0;
}*/
   
    int main (void) {
            int arg, rez;
            printf("Upisite cijeli broj: ");
            scanf("%d", &arg);
            rez = uvecajZa10(arg);
            printf("%d uvecan za 10.0 jest %d\n", arg, rez);
return 0;
}

   

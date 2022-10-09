#include <stdio.h>
void uvecajZa10(double *x) 
{
    *x = *x + 10.;
}
/*
int main (void) {
    double arg;
    printf("Upisite realni broj: ");
    scanf("%lf", &arg);
    uvecajZa10(&arg);
    printf("Uvecana varijabla jest %f\n", arg);
return 0;
}

*/

int main (void) {
    int arg;
    printf("Upisite cijeli broj: ");
    scanf("%d", &arg);
    uvecajZa10(&arg);
    printf("Uvecana varijabla jest %d\n", arg);
    return 0;
}



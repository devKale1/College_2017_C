#include <stdio.h>
void poredaj(int a, int b, int *veci, int *manji)
{
if (a > b)
    {
        *veci = a;
        *manji = b;
    }
else 
    {
        *veci = b;
        *manji = a;
    }
}


int main (void) 
{
    int veci, manji;
        poredaj(2, 3*2, &veci, &manji);
        printf("veci i manji su: %d %d\n", veci, manji);
    return 0;
}

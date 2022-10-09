#include <stdio.h>

int dijeli( int a, int b, int *rez, int *ost) 
{
    if (b==0) return 0 ; // greška djeljenje nulom
    
    *rez = a /b ;
    *ost = a%b ;
    return 1;
}

main ()
{ 
    int a = 11,b = 3 ;
    int rezultat, ostatak ;
    dijeli ( a, b, &rezultat, &ostatak) || printf ("greska !\n");
    printf ("%d/%d = %d i ostatak  %d\n", a,b,rezultat, ostatak);
    return 0 ;
}


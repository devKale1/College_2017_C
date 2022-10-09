#include <stdio.h>

        
 int fak (int m)
{
    int i , f= 1;
    for (i=1; i<=m ; i++) f = f * i;
    return f;
}

void main()
{
    int i, n, r ; 
    do {
    printf("Upisi n i r "); 
    scanf ("%d %d", &n,  &r); }
    while (n<r) ;
        
    printf("%d \n", fak(n)/(fak(n-r)*fak(r) ) );
}
    
        

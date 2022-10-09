#include <stdio.h>

int fac(int n)
{
    if (n==1) return 1 ;
        else return (n * fac(n-1));
}
        
 int fakt (int m)
{
    int i , f= 1;
    for (i=1; i<=m ; i++) f = f * i;
    return f;
}

void main()
{
    int i;
    for (i=1; i <13 ; i++) 
    printf("%d %d\n", fac(i),fakt(i));
}
    
        

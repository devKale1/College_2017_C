#include <stdio.h>

int fakt (int n)
{
    int i , f= 1;
    for (i=1; i<=n ; i++) f = f * i;
    return f;
}
int binK ( int n , int r)
{
    int bin; 
      bin = fakt(n)/(fakt(n-r)*fakt(r));
return  bin;
}    

void main()
{
    int n, r, i;
    
    for( n=0 ; n < 10; n++ )
       { for (r= 0 ; r <=n ; r++) 
         printf("%d ", binK(n,r) );
             
         printf("\n");   
       }
    
        
}

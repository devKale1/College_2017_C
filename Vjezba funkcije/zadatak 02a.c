#include <stdio.h>

int NZD( int a, int b) 
{
    while ( ( a-b ) != 0 ) 
          if( (a-b) > 0 ) a = a - b ; 
                     else b = b - a; 
                  
    return a;
}

int NZD1 (int a, int b)
{
    if (a == b ) return a ;
        else 
            if (a>b) return NZD1(a-b,b) ;
            else return NZD1(b-a, a) ;    
 }
int NZD2 ( int x ,int  y) 
 {
    int r , a, b ; 
     
     if (x >= y ) {a = x ; b = y; }
     else         {a = y ; b = x; }
     
    do {
        r = a%b ;
        a = b ;
        b = r ; 
        printf("%d %d\n", a, b );         
     
    }while (r!=0) ;
    return a;
    
}
        
     
 
 
 void main()
{
    int i, j ; 
    
    printf("Upisi i = ");
    scanf("%d",&i ); 
    printf("Upisi j = ");
    scanf("%d",&j );

    printf ("najveci zajednicki djelitelji brojeva %d i %d je %d\n", i, j, NZD(i,j));
    printf ("najveci zajednicki djelitelji brojeva %d i %d je %d\n", i, j, NZD1(i,j));
    printf ("najveci zajednicki djelitelji brojeva %d i %d je %d\n", i, j, NZD2(i,j));
}    
                    

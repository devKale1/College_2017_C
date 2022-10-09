#include <stdio.h>

int fibo(int n)
{
    if (n==1) return 1 ;
    if (n==0) return 1 ;     
        else return (fibo(n-1) + fibo (n-2));
}
 int fib (int m)
{
    int i , f0= 1 , f1 = 1, f; 
    for (i=2; i<=m ; i++) 
    {    f = f0 + f1 ;
        f0 = f1 ; 
        f1 = f ; }
    return f;
}
void main()
{
    int i;
    for (i=3; i <13 ; i++) 
    printf("%d %d\n", fib(i),fibo(i));
}
    
        

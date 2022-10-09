#include <stdio.h>

int zbroj(int a, int b ) ; 

main()
{
    int a = 2 , b = 3 , i = 3  ;  
    
    printf("u glavnom programu i = %d \n", i );
        
    printf ("zbroj %d + %d = %d\n",  a, b, zbroj(a,b) );
    
   printf (" u glavno programu nakon poziva funkcije a = %d \n", a);
    
}
int zbroj(int a, int b ) 
{
    int i = 5 , suma= 0  ;
    printf ("u potporgramu je i = %d \n", i ); 
    a = a + 2;
    printf (" u potprogramu je a uvecan za 2 i sada je a = %d \n", a);
    return (a + b );
}

#include <stdio.h>

main ()

{
    
    int i = 3 ;
    int *j;
    j = &i; 
    
    printf("\n Adresa varijable i = %u", &i);
    printf("\n Adresa varijable i = %u", j);
    printf("\n Adresa varijable j = %u", &j);
    printf("\n");
    
    printf("\n Vrijednost varijable i = %d", i); 
    printf("\n Vrijednost varijable i = %u", *(&i)); 
    printf("\n Vrijednost varijable i = %d", *j); 
    printf("\n Vrijednost varijable j = %u", j);
    printf("\n");
    
    
}

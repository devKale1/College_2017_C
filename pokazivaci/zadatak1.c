#include <stdio.h>

void kvad2(int n, int *rez) 
{
    *rez = n*n;
    printf("rez = %d u kvad 2", rez);  
}


int main () {
    int n, n2;
    printf ("Upisite n: ");
    scanf("%d", &n);
       

         kvad2(n, &n2);
         printf("\n adresa n2 = %d u main \n", &n2);   
    
    printf("n na kvadrat (preko adrese) je: %d\n", n2);
    printf("Vrijednost varijable n se nije promijenila: %d\n", n);
return 0;
}

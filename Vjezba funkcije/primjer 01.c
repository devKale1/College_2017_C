#include <stdio.h>

int sumaM(int C[], int n ) 
{
    int i, suma= 0  ;
    for (i = 0; i<n; i++ ) 
         suma += C[i] ;
    
    return suma;
}
main()
{
    int A[3], n=3 ,i ,j ;  
    
    for (i=0; i<n; i++) 
        {
        printf("A[%d]= ",i);
        scanf("%d", &A[i]);
        }
        j = sumaM(A[], 3) ; 
     
        printf("Suma elementata polja je %d\n", j  );
       
        
    
    
}

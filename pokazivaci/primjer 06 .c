#include <stdio.h>

int sumaM(int C[], int n ) 
{
    int i, suma= 0  ;
    for (i = 0; i<n; i++ ) 
         suma += C[i]; 
    
    return suma;
}

int sumaM1( int *p , int n ) 
{
    int i, suma= 0  ;
    for (i = 0; i<n; i++ ) 
         suma += *(p+i); 
    
    return suma;
}

main()
{
    int A[3], n=3 ,i ,j ;  
    int *ptr; 
    ptr = &A[0]; 
    for (i=0; i<n; i++) 
        {
        printf("A[%d]= ",i);
        scanf("%d", &A[i]);
        }
        
    printf ("suma clanova polja %d\n", sumaM(A,n) );
    printf ("suma clanova polja %d\n", sumaM1(ptr,n) );    
    
}

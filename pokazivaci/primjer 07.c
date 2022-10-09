#include <stdio.h>
#define n 3  


int dijagonala(int C[n][n] ) 
{
    int i, suma= 0  ;
    for (i = 0; i<n; i++ ) 
      {suma += C[i][i]; }
    
    return suma;
}
main()
{
    int A[n][n],i ,j ;  
    
    for (i=0; i<n; i++) 
        for (j=0; j<n; j++) 
        {
        printf("A[%d][%d]= ",i,j);
        scanf("%d", &A[i][j]);
        }
        
    printf ("Dijagonala je %d\n", dijagonala(A) );
    
}

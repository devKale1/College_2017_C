#include <stdio.h>

void main()
{
    int DIM = 4;
    float a[DIM][DIM], b[DIM], c[DIM];
    int i,j,k;
    
    
    printf("upisi matricu a ");
    for (i = 0; i<DIM; i++)
        for (j=0; j<DIM ; j++)
            scanf("%f" , &a[i][j]);
    printf("upisi vektor  b ");
    for (i = 0; i<DIM; i++)
            scanf("%f" , &b[i]);    
    
    
         
            
     for (i = 0; i<DIM; i++)
        for (j=0; j<DIM ; j++)
           c[i] += a[i][j] * b[j];
        
     
     printf ("      A     *     b           = Ab \n");
        
    for (i = 0; i<DIM; i++)
        {
        for (j=0; j<DIM ; j++) printf("%5.5f " , a[i][j]); 
          printf("\t%5.5f " , b[i]);    
          printf("\t%5.5f " , c[i]); 
          printf("\n");
        }
         
    
}

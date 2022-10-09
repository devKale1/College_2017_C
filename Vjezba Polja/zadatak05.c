#include <stdio.h>

void main()
{
    int DIM = 2;
    float a[DIM][DIM], b[DIM][DIM], c[DIM][DIM];
    int i,j,k;
    
    
    printf("upisi matricu a ");
    for (i = 0; i<DIM; i++)
        for (j=0; j<DIM ; j++)
            scanf("%f" , &a[i][j]);
    printf("upisi matricu b ");
    for (i = 0; i<DIM; i++)
        for (j=0; j<DIM ; j++)
            scanf("%f" , &b[i][j]);    
    
    
         
    for (k=0; k<DIM ; k++)          
     for (i = 0; i<DIM; i++)
        for (j=0; j<DIM ; j++)
           c[i][k] += a[i][j] * b[j][k];
        
     
     printf ("      A     *     B           = AB \n");
        
    for (i = 0; i<DIM; i++){
        for (j=0; j<DIM ; j++) printf("\t%5.5f " , a[i][j]); 
           
         printf("\n"); } 
         printf("\n");
         
    for (i = 0; i<DIM; i++){
        for (j=0; j<DIM ; j++) printf("\t%5.5f " , b[i][j]); 
           
         printf("\n"); }         
         printf("\n");
         
    for (i = 0; i<DIM; i++){
        for (j=0; j<DIM ; j++) printf("\t%5.5f " , c[i][j]); 
           
         printf("\n"); }
}

#include <stdio.h>

void main()
{
    int DIM = 4;
    float a[DIM][DIM], dijagonala1=0, dijagonala2=0;
    int i,j,k;
    
    
    printf("upisi matricu a ");
    for (i = 0; i<DIM; i++)
        for (j=0; j<DIM ; j++)
            scanf("%f" , &a[i][j]);
    
    
    
         
    for (k=0; k<DIM ; k++)          
        dijagonala1 += a[k][k];
    for (k=0; k<DIM ; k++)          
        dijagonala2 += a[k][DIM-1-k];
        
     
    
        
    for (i = 0; i<DIM; i++){
        for (j=0; j<DIM ; j++) printf("\t%5.5f " , a[i][j]); 
           
         printf("\n"); } 
         printf("\n");
         
    printf("suma elementa na dijagonali je %f\n", dijagonala1);
    printf("suma elementa na dijagonali je %f\n", dijagonala2);       
         printf("\n");
         
     }

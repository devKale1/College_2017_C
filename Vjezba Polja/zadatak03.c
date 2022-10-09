#include <stdio.h>
void main()
{
    int i,j;
    float a[3], b[3], c[3], skalar ;
    
    for (i=0 ; i<3 ; i++ ){
    printf("a[%d] = ", i+1);
    scanf("%f", &a[i]);}
    printf("\n");
    for (i=0 ; i<3 ; i++ ){
    printf("b[%d] = ", i+1);
    scanf("%f", &b[i]);   } 
        
    for (i=0 ; i<3 ; i++ ) {
        c[i]= a[i]+b[i] ;
        skalar += a[i]*b[i] ;
    }    
     printf("\n");
    for (i=0 ; i<3 ; i++ )
    printf("c[%d] = %f\n", i+1, c[i]);
    
    printf("\n skalarni produkt je %f\n", skalar);
    }        
         

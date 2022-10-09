#include <stdio.h>
#include <math.h>
#define N 100
void  ucitaj( double a[],m )  
{
	int  i ;
    for (i=0; i<m ; i++ ) a[i]=rand();
}
void ispisi (double a[],m) 
{ 
    int  i ;
    for (i=0; i<m ; i++ ) printf("\t%10.1f ", a[i]);
    printf ("\n") ;
}
void sort (double a[],m )
{
    int i,j;
    double t; 
    for (i=0; i< m ; i++)
        for (j= i; j<m ; j++ )
            if (a[i] > a[j])  
            {
                t = a[i];
                a[i]= a[j];
                a[j] = t;
            }
  }            
void main ()
        {
          double c[N] ; 
          
  
          int   m = 5  ;
                ucitaj (c[],m);
                ispisi (c[],m);
                sort   (c[],m);
                ispisi (c[],m);
        }
                

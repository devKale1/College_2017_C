#include <stdio.h> 
 
#define MAXCLAN 40 
int main(void) 
{    int i;    int fbroj[MAXCLAN];    
    fbroj[0] = fbroj[1] = 1; 
 
   for (i = 2; i < MAXCLAN; ++i)       fbroj[i] = fbroj[i-1] + fbroj[i-2]; 
 
   for (i = 0; i < MAXCLAN; ++i)       printf("%d\n", fbroj[i]);  

   return 0; 
   } 

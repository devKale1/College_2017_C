#include <stdio.h> 
 
#define MAX 500 
#define TRUE 1 
#define FALSE 0 
 
int main(void) 
{   int prosti[MAX];    
    int slobodanInd, indProstog, kandidat, jeProst, i;    
    
    prosti[0] = 2;    
    slobodanInd = 1;    
    kandidat = 3;    
    
    while (slobodanInd < MAX) {
           jeProst = TRUE;       
        for (indProstog = 1; indProstog < slobodanInd; ++indProstog)  
             if( kandidat % prosti[indProstog] == 0 ) 
                 {
                     jeProst = FALSE;     break;          }   
             if (jeProst)  prosti[slobodanInd++] = kandidat; 
                 kandidat += 2;    
             } 
 
   /* kontrolni ispis - nije trazeno u zadatku */ 
    for (i = 0; i < MAX; ++i)  printf("%d. %d\n", i+1, prosti[i]); 
 
   return 0; 
}

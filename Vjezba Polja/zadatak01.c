#include <stdio.h> 
 
#define MAXCLAN 10 
int main(void) 
{    int i;    int broj[MAXCLAN]; 
 
    for (i = 0; i < MAXCLAN; ++i)          scanf("%d", &broj[i]);        
    for (i = MAXCLAN-1; i >= 0; --i)       printf("%d\n", broj[i]); 
 
   return 0; } 
 

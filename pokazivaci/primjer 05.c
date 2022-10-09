
#include <stdio.h>

int A[] = {1,23,17,4,-5,100};
int *ptr;

int main(void)
{
int i;
    ptr = &A[0];                             // ponter na prvi element polja
    printf("\n\n");
    
for (i = 0; i < 6; i++)
{
    printf("A[%d] = %d ",i,A[i]);             //   <-- A 
    printf("ptr + %d = %d\n",i, *(ptr + i)); //    <-- B 
}
return 0;
}

#include <stdio.h>

int j, k;
int *ptr;

int main(void)
{
j = 1;
k = 2;
ptr = &k;
    printf("\n");
    printf("j ima vrijednost   %d  i spremljen je na %p\n", j, (void *)&j);
    printf("k ima vrijednost   %d  i spremljen je na %p\n", k, (void *)&k);
    printf("ptr ima vrijednost %p  i spremljen je na %p\n", ptr, (void *)&ptr);
    printf("Vrijednost cjelobrojne vrijedosti kojs pokazuje na  ptr je  %d\n", *ptr);
    return 0;
}

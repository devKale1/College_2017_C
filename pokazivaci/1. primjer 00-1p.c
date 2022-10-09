#include <stdio.h>
void uvecaj(int* px)
    {
        (*px)++;
    }
int main()
{
    int x = 100;
    uvecaj(&x);
    printf("%d\n", x);
return 0;
}

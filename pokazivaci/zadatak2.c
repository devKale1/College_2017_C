#include <stdio.h>

void kvad3(int *m)
{
    *m = *m * *m;
}
int main (void) {
    int n;
    printf ("Upisite n: ");
    scanf("%d", &n);
    kvad3(&n);
    printf("n na kvadrat (promjena originalne varijable preko adrese) je: %d\n",n);
return 0;
}

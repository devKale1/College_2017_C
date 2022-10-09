#include <stdio.h>
int vratiVrijednostVeceg(int *x, int *y) {
    if (*x > *y) return *x;
        else     return *y;
}
int main (void) {
    int a = 5, b = 2;
    int veci;
    veci = vratiVrijednostVeceg(&a, &b);
    printf("veci od zadana dva broja je: %d\n", veci);
return 0;
}

#include <stdio.h>
int main (void) {
    float x, suma = 0.0f;
    int brojac = 0;
    FILE *ulTok;
    ulTok = fopen ("brojevi.txt", "r");
    while (fscanf(ulTok, "%f", &x) == 1 ) {
        suma += x;
        ++brojac;
    }
    fclose (ulTok);
    if (brojac > 0)
        printf("%f\n", suma/brojac);
    else
        printf("Nije procitan niti jedan broj\n", suma/brojac);
return 0;
}

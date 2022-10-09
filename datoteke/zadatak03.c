#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXIMEDAT 64
int broji (FILE *ulTok) {
    int broj = 0;
    char c;
    while ((c = fgetc(ulTok)) != EOF) {
        c = toupper(c);
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        ++broj;
    }
return broj;
}
int main (void) {
    char imedat[MAXIMEDAT+1];
    int broj;
    FILE *ulaz;
    printf("Upisite ime datoteke>");
    scanf("%s", imedat);
    ulaz = fopen (imedat, "r");
    if (ulaz != NULL) {
        broj = broji(ulaz);
        printf("U datoteci %s ima %d samoglasnika\n", imedat, broj);
        fclose(ulaz);
    }
    else {
        printf("Problemi kod otvaranja datoteke %s\n", imedat);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int broji (char *ime) {
    int broj;
    char c;
    FILE *ulTok;
    ulTok = fopen (ime, "r");
    if (ulTok != NULL) {
        broj = 0;
    while ((c = fgetc(ulTok)) != EOF) {
            c = toupper(c);
            if ( c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' )
                ++broj;
    }
    fclose(ulTok);
    return broj;
}
else {
/* otvaranje ulaznog toka podataka nije uspjelo */
broj = -1;
}
return broj;
}
int main (void) {
    char imedat[64+1];
    int broj;
    printf("Upisite ime datoteke>");
    scanf("%s", imedat);
    broj = broji(imedat);
    if (broj == -1)
        printf("Problemi kod otvaranja datoteke %s\n", imedat);
    else
        printf("U datoteci %s ima %d samoglasnika\n", imedat, broj);
return 0;
}

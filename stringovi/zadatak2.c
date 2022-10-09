#include <stdio.h>
char *traziPrviSamoglas(char *niz) {
    char *samoglas = NULL;
        while (*niz) {
            if (*niz == 'a' || *niz == 'A' ||
                *niz == 'e' || *niz == 'E' ||
                *niz == 'i' || *niz == 'I' ||
                *niz == 'o' || *niz == 'O' ||
                *niz == 'u' || *niz == 'U')

            {
            samoglas = niz;
            break;
            }
        ++niz;
        }
return samoglas;
}





int main (void) {
    char niz[80+1];
    char *samoglas;
    fgets(niz,80,stdin);
    samoglas = traziPrviSamoglas(niz);
        if (samoglas != NULL) {
            printf("%s\n", samoglas);
            printf("%c",*samoglas);
            }
        else {
            printf("U nizu nema samoglasnika", samoglas);
        }
return 0;
}

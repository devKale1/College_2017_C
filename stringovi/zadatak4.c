#include <stdio.h>
#include <string.h>

void umetniZnak(char *niz, char c);

int main (void) {
char niz[7+1+1];
    strcpy(niz, "Student");
    umetniZnak(niz, 'X');
    printf("%s\n", niz);
return 0;
}

void umetniZnak(char *niz, char c) {
int i;
int duljina = 0;
   /* while (*(niz + duljina))
            ++duljina;*/
    duljina = strlen(niz);
    niz[duljina+1] = '\0';
    for (i = duljina; i > 0; --i)
    niz[i] = niz[i-1];
    niz[0] = c;
}

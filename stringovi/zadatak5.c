#include <stdio.h>
#include <string.h>
void umetniZnakove(char *niz, char c);

    int main (void) {
    char niz[7+1+7];
    strcpy(niz, "Studeni");
        umetniZnakove(niz, 'X');
    printf("%s\n", niz);

    return 0;
}
void umetniZnakove(char *niz, char c) {

    int i;
    int duljina = 0;
    while (*(niz + duljina)) ++duljina;
      
    *(niz + 2*duljina) = '\0';
    
    for (i = duljina - 1; i >= 0; --i) {
            *(niz + 2*i + 1) = *(niz + i);
            *(niz + 2*i) = c;
    }
}

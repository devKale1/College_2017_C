#include <stdio.h>
#define MAX 20
void obrniNiz(char *niz) ;
   
int main (void) 
{
    char niz[MAX+1];
    printf ("Upisite niz znakova (ne dulji od %d znakova):", MAX);
    fgets(niz, MAX+1, stdin);
    printf("%s\n", niz);
    obrniNiz(niz);
    printf("%s\n", niz);
    return 0;
}
void obrniNiz(char niz[]) 
{
    int i;
    char pom;
    int duljina = 0;
    while (niz[duljina])
        duljina++;
    for (i = 0; i < duljina/2; ++i) {
        pom = niz[i];
        niz[i] = niz[duljina-1-i];
        niz[duljina-1-i] = pom;
    }
}

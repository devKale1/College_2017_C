#include <stdio.h>

#define MAXRED 20
#define MAXSTUP 20
#define MAXDIMPOMOCNA 100

/*Dimenzije pomocne matrice su 100x100, kako bi se osiguralo da se
 i najveca moguca zadana matrica moze prepisati u pomocnu matricu. */


void transp(int *polje, int *m, int *n, int brclanstup);

int main (void) {
 int m, n;
 int polje[MAXRED][MAXSTUP];
 int i, j;

    printf ("Upisite m i n koji su manji ili jednaki %d i %d: ", MAXRED, MAXSTUP);
    scanf("%d %d", &m, &n);
    printf ("Upisite elemente matrice po retcima:\n");
 
 for (i = 0; i < m; ++i)
 for (j = 0; j < n; ++j)
        scanf("%d", &polje[i][j]);
        printf("\nSlijedi ispis originalne matrice\n\n");
 
 for (i = 0; i < m; ++i) {
 for (j = 0; j < n; ++j)
        printf("%d ", polje[i][j]);
        printf("\n");
 }
 
 
 transp(&polje[0][0], &m, &n, MAXSTUP);
 
         printf("\nSlijedi ispis transponirane matrice\n\n");
 for (i = 0; i < m; ++i) {
 for (j = 0; j < n; ++j)
            printf("%d ", polje[i][j]);
            printf("\n");
 }
 return 0;
} 

void transp(int *polje, int *pm, int *pn, int brclanstup) {
    int pom[MAXDIMPOMOCNA][MAXDIMPOMOCNA];
    int i, j;
    int pomocna;
        for (i = 0; i < *pm; ++i)
        for (j = 0; j < *pn; ++j)
            pom[j][i] = *(polje + i*brclanstup + j);
        /* zamijeni *pm i *pn */
    pomocna = *pm;
    *pm = *pn;
    *pn = pomocna;
        for (i = 0; i < *pm; ++i)
        for (j = 0; j < *pn; ++j)
            *(polje + i*brclanstup + j) = pom[i][j];
} 


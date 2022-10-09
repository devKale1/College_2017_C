#include <stdio.h>
void ispisSamoglasa (char niz[]);
int main (void) {
 char niz[] = "Antigona";
 ispisSamoglasa(niz);
 printf("\n");
 return 0;
}
void ispisSamoglasa (char niz[]) { /* ili bolje (char *niz) */
 int i = 0;
 while (niz[i] != '\0') {
 if (niz[i] == 'a' || niz[i] == 'A' ||
 niz[i] == 'e' || niz[i] == 'E' ||
 niz[i] == 'i' || niz[i] == 'I' ||
 niz[i] == 'o' || niz[i] == 'O' ||
 niz[i] == 'u' || niz[i] == 'U')
 printf("%c", niz[i]);
 ++i;
 }
} 

#include <stdio.h>
void izbaciSamoglase (char *niz);
int main (void) {
 char niz[] = "Antigona";
 printf("%s\n", niz);
 izbaciSamoglase(niz);
 printf("%s\n", niz);
 return 0;
}
void izbaciSamoglase (char *niz) { /* ili (char niz[]) */
 int i = 0, potroseno = 0;
 while (*(niz + i) != '\0') {
 if (*(niz + i) != 'a' && *(niz + i) != 'A' &&
 *(niz + i) != 'e' && *(niz + i) != 'E' &&
 *(niz + i) != 'i' && *(niz + i) != 'I' &&
 *(niz + i) != 'o' && *(niz + i) != 'O' &&
 *(niz + i) != 'u' && *(niz + i) != 'U')
 *(niz + potroseno++) = *(niz + i);
 ++i;
 }
// *(niz + potroseno) = '\0';
 /* VAZNO PITANJE: sto bi bio rezultat bez prethodne naredbe? */
} 

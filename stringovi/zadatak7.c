#include <stdio.h>
#include <string.h>
#define MAXNIZ 30
    int main (void) {
    char s1[MAXNIZ+1], s2[MAXNIZ+1], s3[2*MAXNIZ+1];
/* procitaj prvi niz. Citaj dok ne dodjes do \n */
    scanf("%[^\n]", s1);
/* procitaj znak '\n' koji je preostao na ulazu */
    getchar();
/* procitaj drugi niz. Citaj dok ne dodjes do \n */
    scanf("%[^\n]", s2);
/* kopiraj s1 u s3 */
    strcpy(s3, s1);
/* dodaj s2 na kraj s3 */
    strcat(s3, s2);
    printf("%s\n", s3);
return 0;
}

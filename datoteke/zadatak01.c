#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main (void) {
    int c;
    FILE *tokPod;
    char *imeDat = "ulaz.txt";
    tokPod = fopen(imeDat, "r");
        if (tokPod == NULL) {
            printf("Ne mogu otvoriti %s\n", imeDat);
            exit(1);
        }
    while ((c = fgetc(tokPod)) != EOF)
        putchar(tolower(c)); /* ili fputc(toupper(c), stdout); */
    fclose(tokPod);
    return 0;
}

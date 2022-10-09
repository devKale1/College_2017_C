#include <stdio.h>
void main () {
  FILE *fi;
  int i, n, mbr, sif_pred, ocjena; 
  float suma;

  fi = fopen ("ispiti", "r");
  /* provjera otvaranja */
 if (fi == NULL) {printf("ne postoji datoteka!"); exit(1); }   

  while (fscanf(fi, "%4d%2d", &mbr, &n) == 2) {
    suma = 0;
    for (i = 0; i < n; i++) {
      fscanf (fi, "%3d%1d", &sif_pred, &ocjena);
      suma += ocjena;
    }
    printf ("Prosjek od %d je %f\n", mbr, suma/n);
  }

  fclose (fi);
}


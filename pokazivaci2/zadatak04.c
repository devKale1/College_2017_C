#include <stdio.h>
#define MAXDIM 100

void prebroji(float *polje, 
              int n, 
              int *vecihOdNula, 
              int *manjihOdNula, 
              int *jednakihNula   ) 
{
 int i;
    *vecihOdNula = *manjihOdNula = *jednakihNula = 0;
 for (i = 0; i < n; ++i)
      if (*(polje + i) < 0.0)       (*manjihOdNula)++;
      else 
          if (*(polje + i) == 0.0)  (*jednakihNula)++;
      else                          (*vecihOdNula)++;
 return;
}



int main (void)
{
 int m;
 float polje[MAXDIM];
 int i;
 int vecih=0, manjih=0, jednakih=0;
    printf ("Upisite m manji ili jednak %d: ", MAXDIM);
    scanf("%d", &m);
    printf ("Upisite elemente polja:\n");
 for (i = 0; i < m; ++i)
    scanf("%f", &polje[i]);
    printf("\n\nSlijedi ispis ucitanog niza\n");
 for (i = 0; i < m; ++i)
    printf("%f\n", polje[i]);
 
    prebroji(&polje[0], m, &vecih, &manjih, &jednakih);
    prebroji(&polje[0], m, &vecih, &manjih, &jednakih);
    printf("\nn>0 ima: %d n<0 ima: %d n==0 ima: %d\n", vecih, manjih, jednakih);
 
 return 0;
}

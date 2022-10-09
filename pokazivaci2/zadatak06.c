#include <stdio.h>
#define MAXRED 3
#define MAXSTUP 3
int main(void) 
{
 int i, j, sumaStupcaLijevo, najveci;
 int mat[MAXRED][MAXSTUP];
    printf("Upisite clanove polja:\n");
        for (i = 0; i < MAXRED; ++i)
        for (j = 0; j < MAXSTUP; ++j)
                scanf("%d", &mat[i][j]);
                printf("Indeksi stupaca:\n");
        
        
    for (j = 1; j < MAXSTUP; ++j) 
    {
        /* odredi najveci clan u stupcu j, 
           te sumu lijevog susjednog stupca */
        sumaStupcaLijevo = mat[0][j-1];
        najveci = mat[0][j];
        for (i = 1; i < MAXRED; ++i) 
        {
            sumaStupcaLijevo += mat[i][j-1];
            if (mat[i][j] > najveci) 
            {
                najveci = mat[i][j];
            }
        }
                    
        
        if (najveci == sumaStupcaLijevo) 
        {
            printf("%d\n", j);
        }
    }
 return 0;
}

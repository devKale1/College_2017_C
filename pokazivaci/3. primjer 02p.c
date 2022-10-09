#include <stdio.h>
#define STOPA 0.08
float kamate(float *iznos) 
{
    float kamate_iznos = *iznos * STOPA;
    *iznos += kamate_iznos;
    return( kamate_iznos );
}
float uplata(float rata, float *iznos){
    *iznos -= rata;
    return *iznos;
}

int main() {
    float iznos = 10000, rata = 100;
    float novi_iznos;
  //  novi_iznos = kamate(&iznos) + uplata(rata,&iznos);
      novi_iznos =  uplata(rata,&iznos) + kamate(&iznos);
    
    printf("Novi iznos: %.2f\n", novi_iznos);
    printf("Iznos : %.2f\n", iznos);
return 0;
}

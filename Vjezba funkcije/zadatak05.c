#include<stdio.h>
#include<math.h>

float f(float x)
{
    return 2* sin(x) - 0.5 ;
}

float df (float x)
{
    return 2* cos(x)  ;
}

void main()
{
    int i , maxPon , t= 0 ;
    float h, x0, x1, greska ;
    printf("\nEnter x0, grešku, broj iteracaija \n");
    scanf("%f %f %d", &x0, &greska , &maxPon);
    for (i=1; i<=maxPon; i++)
    {
        h=f(x0)/df(x0);
        x1=x0-h;
        printf(" Ponavljanje br. %3d, x = %9.6f\n", i, x1);
        if (fabs(h) < greska)
        {
            printf("Nakon %3d ponavljanja,  nultoèka je  = %8.6f\n", i, x1);
        t = 1; break ; 
        }
        x0=x1;
    }
    
    if ( t==0 ) printf(" Rješenje ne konvergira ili je premalo iteracija \n");
   
}

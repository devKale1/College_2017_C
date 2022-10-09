#include <stdio.h>

int ucitajBroj()
{
int tmpBroj;
do{
   printf("Unesite broj izmedju 1 i 100:\n");
   scanf("%d", &tmpBroj);
   }  while(tmpBroj < 1 || tmpBroj > 100);
return tmpBroj;
}

int main()
{
int x,y,z;
x = ucitajBroj();
y = ucitajBroj();
z = ucitajBroj();
}

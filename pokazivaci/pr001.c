#include <stdio.h>

main()

{

int num = 5;

int *p1num = &num;

int *p2num = NULL;

p2num = p1num;

*p2num = 7;

printf("%d\n", num);

}

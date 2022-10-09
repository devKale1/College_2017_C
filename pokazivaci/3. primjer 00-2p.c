#include <stdio.h>
main(){
    
/*  int num;
    int* pnum = &num;
    printf("%p \n", pnum);
    printf("%08x\n", pnum);
*/
    
/*    
    int num = 9, num2;
    int* pnum = &num;
    *pnum = 11;
    num2 = *pnum + 2;
   printf("%d %d %d\n",num,*pnum, num2);    
*/    
    int i = 75;
     int* ip = &i;
 //  ip = 5;
    *ip = 5;
    printf("%d\n", ip);
    printf("%d\n", *ip);
    printf("%d\n", i ); 
    }

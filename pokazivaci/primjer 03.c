#include <stdio.h>

main ()
{
    int x = 5;
    int *p ;
    p = &x ; // inicijalizacija
    printf("%p %p\n",p, &p) ;
    
    x = 7 ;
    printf("%d %d\n",x , *p ) ;
    
    *p = 9 ;
    printf("%d %d\n",x , *p ) ;
    
    (*p)--; 
    
    printf("%d %d\n",x , *p ) ;
    *p--;
    printf("%d %d\n", x , *p ) ;
    printf("%p %p\n",&x , p ) ;
    
    return 0;
}

    

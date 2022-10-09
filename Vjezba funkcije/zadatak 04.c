 #include <stdio.h>
 #define prost 1
 #define slozen 0 
 int prostBroj (int n ) ;
 void main ()
{
    int i ; 
    for ( i = 1 ; i < 100 ; i ++ ) 
        if ( prostBroj(i) ==  prost  ) printf ("%d je prost broj \n", i ); 
}           
 int prostBroj (int n ) 
 {  int m = prost , i ; 
     
    if ( n > 2 )
{
        m = prost; 
        if  ( n%2 == 0) m = slozen; // broj je složen 
        else 
          for (i= 3;i*i<n;i=i+2) if(n%i == 0 ) { m = slozen ;break; } 
    }                          
return m ; 
}
               


Primjer 00.

Napravi funkciju koja zbraja dva cijela broja.

Primjer 01.

Napiši funkciju koja zbraja elemente polja.

Primjer 02.

Napiši funkciju koja zbraja sve elemente na dijagonali kvadratne matrice .

Primjer 03

Napiši funkciju koja računa N faktorijela ( n! = 1 2 3 4 5 … n )

Primjer 04

Napiši funkciju koja računa N ti član fibonačijevog niza.

Zadatak 1

a ) Učitaj cjelobrojne  N i R ,  N > R . Izračunaj  = (  n!  / (  (n-r)! *r!  )  ) ( n povrh r ) 
b) Ispiši Pitagorin trokut ( 10 redaka )

1

1

1         2          1

1         3          3         1

1         4          6         4         1

Zadatak 2

Izračunaj najveći zajednički djelitelj dvaju cijelih brojeva koristeći funkciju

int NZD( int a, int b) 
( ako se koristi svojstvo za a > b NZD (a,b ) = NZD(a-b, b)  , a= NZD (a,a)

Zadatak 3.

Napraviti funkciju koja sortira polje od 100 elementa.

Zadatatak 4

Napiši program koji koristeći funkciju int prost (int n) ispisuje sve proste brojeve do manje od 100.

Zadatak 5.

Koristeći Newton – Raphsonovu metodu rješavanja nelinearnih jednadžbi napravi program za numeričko traženje nul-točaka funkcije f(x) = x * x -2

f´(x) = 2 * x

x(0) … pretpostavimo, EPS .. (greška zadajemo) , MaxPon .. zadamo

 

x (i+1) = x (i) – f(x(i)) / f´(x(i) ) ;

f(x(i)) / f´(x(i) )  EPS

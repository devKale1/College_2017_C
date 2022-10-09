1.    Napisati funkciju traziPrviSamoglas koja u zadanom nizu znakova pronalazi prvi samoglasnik (malo ili veliko slovo) koji se pojavljuje u nizu. Funkcija u pozivajući program vraća pokazivač na pronađeni samoglasnik, a ako u nizu nema niti jedan samoglasnik, vraća null pokazivač.

Napisati glavni program koji će učitati niz znakova ne dulji od 80 znakova, te pomoću funkcije traziPrviSamoglas pronaći te na zaslon ispisati prvi samoglasnik učitanog niza ili poruku "U nizu nema samoglasnika".

 

2.    Napisati glavni program koji će  učitati niz znakova ne dulji od 80 znakova, pomoću funkcije traziPrviSamoglas iz prethodnog zadatka pronaći te na zaslon, pomoću funkcije printf i formatske specifikacije %s, ispisati podniz koji započinje na pronađenom samoglasniku i završava na kraju učitanog niza. Ako u učitanom nizu nema niti jednog samoglasnika, glavni program treba ispisati poruku "U nizu nema samoglasnika".

3.    Napisati funkciju obrniNiz koja obrće niz znakova. Npr. niz znakova "ABCDE" mijenja u niz znakova "EDCBA". Uputa: 1. znak zamijeniti s n-tim znakom, 2. znak zamijeniti s n-1-vim znakom, itd. 

4.     Napisati funkciju umetniZnak koja na početak zadanog niza znakova umeće zadani znak.Funkcija može računati na to da je za niz u pozivajućem programu rezervirano dovoljno memorije. 

5.    Napisati funkciju umetniZnakove koja ispred svakog znaka zadanog niza umeće zadani znak (npr, ako se funkciji zada niz "Studeni" i znak 'X', funkcija mijenja niz u "XSXtXuXdXeXnXi"). Funkcija može računati na to da je za niz u pozivajućem programu rezervirano dovoljno memorije. 

6.    Napisati program koji pomoću funkcije učitava znakove u niz s1 dok god ne bude učitan znak 'X' (znak 'X' se ne dodaje u niz s1). Zatim u niz s2 učitava znakove dok se ne pojavi znak 'Y' (znak 'Y' se ne dodaje u niz s2). Osigurati da nizovi s1 i s2 budu ispravno terminirani (tj. na kraju niza se nalazi znak '\0'). Nakon učitavanja, ispisati nizove s1 i s2 na zaslon, svaki u svoj redak. Nizovi s1 i s2 sigurno nisu dulji od 80 znakova.

7.    Napisati program koji će pomoću funkcije scanf iz <stdio.h> učitati dva niza znakova s1 i s2, čiji se sadržaj unosi preko tipkovnice i to tako da se svaki niz utipka u svojem retku. Oznaka kraja retka se ne učitava u niz znakova.  Može se računati da niti jedan redak teksta neće biti dulji od 30 znakova. Program treba formirati niz s3, čiji sadržaj nastaje spajanjem nizova s1 i s2, te dobiveni niz s3 ispisati na zaslon.

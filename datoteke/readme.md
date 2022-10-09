1.       Napisati program koji će sadržaj tekstualne datoteke ulaz.txt prepisati na zaslon, ali tako da se umjesto malih slova ispisuju velika. Za čitanje znakova iz datoteke treba koristiti funkciju fgetc. Pomoću editora (npr. notepad) prirediti tekstualnu datoteku ulaz.txt, pohraniti ju unutar nekog kazala (direktorija), npr. c:\tmp, te testirati program.

2.       Napisati funkciju broji koja kao argument prima niz znakova koji predstavlja ime  tekstualne datoteke (tip podatka char *). Funkcija treba otvoriti tok podataka za čitanje iz datoteke sa zadanim imenom (tj. "otvoriti datoteku"), prebrojati samoglasnike (broje se i "mali" i "veliki" samoglasnici), zatvoriti tok podataka (tj. "zatvoriti datoteku"), te u pozivajući program vratiti broj samoglasnika. Ako funkcija ne uspije otvoriti datoteku, kao broj samoglasnika vraća -1. Za čitanje znakova iz datoteke treba koristiti funkciju fgetc. Pomoću editora (npr. notepad) prirediti jednu tekstualnu datoteku, te napisati glavni program kojim će se testirati rad funkcije.

3.       Slično kao u prethodnom zadatku. Funkcija broji kao argument prima tok podataka (tip podatka *FILE) koji je već otvoren za tekstualnu datoteku. Glavni program otvara tok podataka za postojeću tekstualnu datoteku, predaje ga funkciji, a kad funkcija obavi brojanje, glavni program ispisuje rezultat i zatvara tok podataka

4.       Napisati program koji pomoću funkcije fscanf čita realne brojeve iz tekstualne datoteke brojevi.txt, te po završetku čitanja (kada se dođe do kraja datoteke ili se pri čitanju dogodi pogreška) na zaslon ispisuje ili aritmetičku sredinu učitanih brojeva ili poruku "Nije procitan niti jedan broj".

5.       Napisati program koji će čitajući slijednu formatiranu datoteku „ispiti” u kojoj je zapis o studentu oblika:

mmmmNNpppopppopppopppo…

gdje je:
mmmm - matični broj studenta
NN - broj položenih ispita
ppp - šifra predmeta
o - ocjena (parova pppo ima NN)

ispisati za svakog studenta matični broj i prosječnu ocjenu.

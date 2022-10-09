Ktm_lab_1 :
1. Korištenjem klasa DigitalIn i DigitalOut napišite program koji će dok je pritisnuta sklopka S1 u beskonačnoj petlji ponavljati slijed paljenja LED-ica prikazan na slici 2. Svaka LED-ica treba svijetliti 0,1 sekundu.
2. Upotrebom BusOut klase umjesto četiri pridruživanja u jednom retku možemo čitav skup digitalnih izlaza (sabirnicu) postaviti u željeno stanje. U tablici 1 prikazane su funkcije iz klase BusOut.
3. U ovom zadatku ćemo ostvariti paralelnu jednosmjernu komunikaciju između dva mbeda (slika 3). Mbed koji će slati podatke zvat ćemo masterom, a onaj koji će primati i obrađivati podatke slaveom. Veličina komunikacijske sabirnice je 4 bita, tj. paralelno kroz sabirnicu možemo prenositi poruke veličine 4 bita.

Ktm_lab_3 :
1. Za ostvarivanje SPI serijske komunikacije (slika 1) na mbedu postoje dvije klase, master i slave klasa. Za slučajeve u kojima mbed ima funkciju master uređaja na komunikacijskoj sabirnici koristi se klasa naziva SPI, a u slučaju kad se mbed koristi kao slave uređaj koristi se klasa SPISlave.
2. U ovom zadatku će se povezati dva mbeda s ciljem upoznavanja sa SPISlave klasom koja se koristi u primjenama kada mbed ima ulogu slave uređaja u komunikaciji.
3. Komunikacija sa slave uređajima može se odvijati na tri različita načina:
* Master šalje podatak (naredbu) slave uređaju, slave obrađuje podatak (naredbu) i vraća odgovor
* Master šalje podatak (naredbu) slave uređaju, slave obrađuje podatak (naredbu) i ne vraća odgovor
* Master ne šalje ništa konkretno slaveu, ali traži da mu slave vrati podatak
4. U prvoj vježbi zadatak je bio kontinuirano slati 4-bitni podatak preko paralelne komunikacijske linije s master mbeda na slave mbed. 4-bitni podatak zadaje se položajem sklopki S0 (pin20) do S3 (pin17), gdje sklopka S0 predstavlja najmanje-značajni bit, a S3 najznačajniji bit. Za razliku od zadatka u prvoj vježbi u ovom zadatku će se koristiti SPI serijska komunikacijska veza (u trećoj vježbi koristila se paralelna komunikacija).

Ktm_lab_4 :
1. Cilj ovog zadatka jest upoznavanje s funkcijama za master i slave ulogu mbeda na I2C sabirnici. Naredbe vezane za I2C master klasu prikazane su u tablici 1, a naredbe vezane za I2CSlave klasu u tablici 2.
2. Potrebno je napisati program za mbed pomoću kojeg će se svake sekunde preko I2C komunikacije očitavati temperatura na LM85B temperaturnom senzoru i prikazivati na terminalu.
3. U prvoj vježbi zadatak je bio kontinuirano slati 4-bitni podatak preko paralelne komunikacijske linije s master mbeda na slave mbed. 4-bitni podatak zadaje se položajem sklopki S0 (pin 20) do S3 (pin 17), gdje sklopka S0 predstavlja najmanje-značajni bit, a S3 najznačajniji bit. Za razliku od zadatka u prvoj vježbi u ovom zadatku će se koristiti I2C serijska komunikacijska veza (u prvoj vježbi koristila se paralelna komunikacija).

Ktm_lab_5 :
1. Cilj ovog zadatka jest upoznavanje s funkcijama za ostvarivanje asinkrone serijske komunikacije na mbedu. U tu svrhu koristi se klasa Serial, čije su najbitnije funkcije opisane u tablici 1. U tablici 1 pod znakom se misli na niz od 8 bitova, tj. jedan bajt.
2. U ovom zadatku bit će pokazano kako prenijeti 32-bitni podatak preko asinkrone serijske komunikacijske veze. Spojite mbede prema slici 7 i prebacite odgovarajuće programe u master i slave mbed. Pokrenite program i analizirajte kako radi. Spojite se Teratermom na master mbed.
3. U prvoj vježbi zadatak je bio kontinuirano slati 4-bitni podatak preko paralelne komunikacijske linije s master mbeda na slave mbed. 4-bitni podatak zadaje se položajem sklopki S0 (pin20) do S3 (pin17), gdje sklopka S0 predstavlja najmanje značajni bit, a S3 najznačajniji bit.
Za razliku od zadatka na prethodnim vježbama u ovom zadatku će se koristiti asinkrona serijska komunikacijska veza.
4. CAN komunikacija
5. U prvoj vježbi zadatak je bio kontinuirano slati 4-bitni podatak preko paralelne komunikacijske linije s master mbeda na slave mbed. 4-bitni podatak zadaje se položajem sklopki S0 (pin20) do S3 (pin17), gdje sklopka S0 predstavlja najmanje značajni bit, a S3 najznačajniji bit. Za razliku od zadatka na prethodnim vježbama i trećeg zadatka u ovoj vježbi u ovom zadatku za istu funkcionalnost treba upotrijebiti CAN komunikacijski protokol.

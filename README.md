Documentazione 

Blaster DNA



Questo script scritto in C permette di ottenere una sequenza di amminoacidi a partire da una sequenza di un particolare gene. 



Questo processo viene eseguito in tutte le cellule in maniera quasi algoritmica. Una sequenza di DNA è costituita da 4 basi azotate A,C,G,T ovvero (adenina,citosina,guanina e timina). Questa sequenza in una cellula viene convertita in RNA spezzando la catena di DNA e usandola come una sorta di calco. E' bene ricordarsi che l'RNA sostituisce la base azotata T con U (uracile).



A partire dalla sequenza di mRNA appena convertita all'interno della cellula avviene il procedimento più importante per lo sviluppo biologico ovvero la traduzione dell'mRNA in sequenza amminoacidica.

La traduzione segue delle regole specifiche:

-Solo alcune porzioni della sequenza di mRNA codificano un amminoacido, altre invece possono essere considerati placeholder, vengono chiamati "esoni"

-La traduzione avviene prendendo in esame una sequenza di tre basi , tale sequenza viene chiamata"codone". Ogni codone codifica uno specifico amminoacido.

-La polimerizzazione degli amminoacidi (il processo di traduzione) è un processo non ambiguo ma ridondante in quanto piu codoni possono codificare lo stesso amminoacido

-Essendo 4 le basi azotate e i codoni formati da triplette di basi azotate le combinazioni possibili sono esattamente 4^3 ovvero 64 possibili combinazioni

-Una volta ottenuta la sequenza amminoacidica si puo effettuare il cosi detto processo di balsting in modo da risalire alla proteina corrispondente e quindi alla sua funzione specifica all'interno dell'organismo


<h2>Funzionamento del programma</h2>

Per effettuare lo studio della sequenza genica presa in esame è necessario caricare la stessa in un file .txt nella stessa cartella del file sorgente in modo da poterla caricare e sottoporre all'algoritmo

Una volta caricato il file l'algoritmo appena eseguito stamperà la sequenza genica di input, eseguirà la traduzione stampandola a video



TO-DO

Trasformare in funzione la parte di codice che permette il caricamento della sequenza da file esterno



Aggiungere una funzione che permette di confrontare due sequenze geniche di organismi diversi, come ad esempio un gene che codifica la stessa proteina negli esseri umani e in animali e tramite comparazione stabilire che rapporto c'è dal punto di vista di discendenza e di mutazioni 



-Sfruttare le librerie del database NCBI per effettuare il processo di BLAST all'interno dello script (o almeno aprire il browser e fare la ricerca in automatico)



I dati sono presi dal database NCBI (National Center for Biotechnology Information) , piattaforma dedicata interamente alla raccolta di dati biologici





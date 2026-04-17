/*Scrivi un programma in C che simuli la decelerazione di un veicolo. 
L'utente inserisce la velocità iniziale (in km/h) e una decelerazione costante (es. 2.5 m/s²). Il programma deve mostrare, 
secondo dopo secondo, come diminuisce la velocità fino a quando il veicolo non si ferma completamente (0 km/h).
Al termine, mostra il tempo totale impiegato per la frenata e lo spazio percorso.*/

#include <stdio.h>

int main (){
    int tempo = 1;
    float velocita, decelerazione, distanza = 0;  

    do {
        printf ("Inserisci la velocità iniziale: "); 
        scanf ("%f", &velocita); 
    } while (velocita <= 0); 

    do {
        printf ("Inserisci la decelerazione in m/s^2: "); 
        scanf ("%f", &decelerazione); 
    } while (decelerazione <= 0); 

    while (velocita > 0){
        velocita = velocita - decelerazione * tempo; 
        tempo++; 
        printf ("La velocità corrisponde a %.2f m/s\n", velocita); 
    }
    distanza = 0.5 * decelerazione * tempo * tempo; 
    printf ("Per frenare hai impiegato %d secondi e hai utilizzato %.2f metri\n", tempo, distanza);

}
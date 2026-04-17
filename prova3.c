//3) scrivi un programma in C che mostri il moto uniformemente accelerato di un'automobile secondo per secondo finchè non arriva alla velocità di 100 km/h 
// con un accelerazione scelta dall'utente. Mostra anche la distanza percorsa alla fine.

#include <stdio.h>

int main (){
    // 100 km/h * 3.6 = 27.8 m/s
    float velocita = 0, accelerazione, distanza = 0, limite = 27.8; 
    int tempo = 0;

    do {
        printf ("Inserisci l'accelerazione in m/s^2: "); 
        scanf ("%f", &accelerazione);
    } while (accelerazione < 0); 
    
    while (velocita < limite){
    velocita = accelerazione * tempo;
    tempo ++; 
    distanza = 0.5 * accelerazione * tempo * tempo;  
    }
    printf ("Hai percorso %f metri, in %d secondi, alla velocità di %f km/h\n", 
        distanza, tempo, velocita); 
    tempo++;

    return 0;
}
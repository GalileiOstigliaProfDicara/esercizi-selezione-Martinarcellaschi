/*L’utente inserisce la propria età e il programma dice se è maggiorenne (ovvero con età maggiore uguale a 18 anni)*/

#include <stdio.h>

int main(){
    int eta_utente; 
    printf ("Inserisci la tua età: \n"); 
    scanf ("%d", &eta_utente);

    if (eta_utente >= 18){
        printf ("Sei maggiorenne\n");
    } else {
        printf ("Sei minorenne\n");
    }

    return 0;
}
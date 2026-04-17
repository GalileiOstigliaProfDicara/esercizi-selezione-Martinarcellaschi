/*Scrivi un programma in C che chieda all'utente un numero intero positivo N.
 Il programma deve visualizzare tutti i numeri multipli di 3 partendo da N (o dal primo multiplo di 3 inferiore a N) fino ad arrivare a 0, 
 procedendo a ritroso.*/

#include <stdio.h>

int main (){
    int num; 

    do {
        printf ("Inserisci un numero: "); 
        scanf ("%d", &num); 
    } while (num < 0); 

    for (int i = num; i > 0; i--){
        if (i % 3 == 0){
            printf ("%d - ", i); 
        }
    }

}

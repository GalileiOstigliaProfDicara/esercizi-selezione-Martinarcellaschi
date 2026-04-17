/* Scrivi un programma in C che chieda all'utente un numero intero positivo. 
 Il programma deve stampare tutti i multipli di 5 compresi tra quel numero e 0, procedendo in ordine decrescente (a ritroso). */

#include <stdio.h>

int main (){
    int num; 

    do{
        printf ("Inserisci un numero: "); 
        scanf ("%d", &num); 
    } while (num < 0); 

    for (int i = num; i > 0; i--){
        if (i % 5 == 0){
            printf ("%d - ", i); 
        }
    }
}


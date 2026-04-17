/*Scrivi un programma in C che simuli il lancio di un dado a 6 facce per 150 volte.
Il programma deve:
Generare un numero casuale tra 1 e 6 per ogni lancio.
Contare quante volte esce il numero 6 e quante volte esce un numero diverso da 6.
Al termine dei lanci, stampare il totale dei "6" ottenuti e il totale degli "altri numeri".*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int dado6, min = 1, max = 6, lancio, dado, num_lanci = 0; 
    srand (time(NULL)); 

    do {
        lancio = rand () % (max - min + 1) + min; 
        num_lanci++;
        if (lancio == 6){
            dado6++;
        } else {
            dado++;
        }
    } while (num_lanci < 150); 

    printf ("Il numero 6 è uscito %d volte, mentre gli altri numeri sono usciti %d volte", dado6, dado); 


}
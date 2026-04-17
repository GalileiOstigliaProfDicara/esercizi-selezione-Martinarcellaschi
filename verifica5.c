/*Scrivi un programma in C per simulare il rifornimento di un serbatoio di un camion che ha una capacità di 400 litri. 
Il programma deve continuare a chiedere all'utente quanti litri di carburante vuole inserire finché il totale non raggiunge o supera la capacità massima.
Al termine, stampa il totale dei litri inseriti e indica se il serbatoio è "pieno" o "traboccante" (se è stata superata la soglia).*/

#include <stdio.h>

int main (){
    int limite = 400, num_litri = 0, tot = 0; 

    do {
        printf ("Inserisci il numero di litri che vuoi aggiungere: "); 
        scanf ("%d", &num_litri); 
        tot = tot + num_litri; 
    } while (tot < limite); 

    printf ("Il totale di litri inseriti è: %d\n", tot); 
    if (tot == limite){
        printf ("Il serbatoio è piene\n"); 
    } else {
        printf ("Il serbatoio è traboccante\n"); 
    }
}
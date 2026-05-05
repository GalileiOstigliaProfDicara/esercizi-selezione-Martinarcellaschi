/*Scrivi un programma in C che riempia un array di 20 elementi con numeri casuali tra 1 e 100. Quindi chiedi all'utente un valore e mostra un 
messaggio se quel valore è all'interno dell'array*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int array[20], num_utente, min = 1, max = 100, conta = 0; 
    srand (time(NULL)); 

    for (int i = 0; i < 20; i++){
       array[i] = rand () % (max - min + 1) + min; 
    } 


    printf ("Inserisci un valore tra 1 e 100: "); 
    scanf ("%d", &num_utente); 

    for (int i = 0; i < 20; i++){
        if (num_utente == array[i]){
        conta++
    }
    if (conta > 0){
        printf ("Il numero è presente nelle celle dell'array\n"); 
    } else {
        printf ("Il numero non è presente nelle celle dell'array")
    }
    return 0;
    }

    
}
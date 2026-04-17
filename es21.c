//L'utente inserisce un numero maggiore di uno e il programma continua a calcolare le potenze del numero inserito fino a quando una potenza supera 5000.

#include <stdio.h> 

int main (){
    int numero = 0, potenza = 1, esponente = 0; 
    
    while (numero <= 1){
        printf ("Inserisci un numero mggiore di 1: ");
        scanf ("%d", &numero);
    }
        
    while (potenza <= 5000){
        printf ("Potenza di %d elevato alla %d = %d\n", numero, esponente, potenza);
        potenza = potenza * numero;
        esponente++;
    } 
 return 0;
}
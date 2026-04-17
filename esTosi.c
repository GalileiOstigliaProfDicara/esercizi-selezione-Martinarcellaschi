//Si vuole costruire una slot machine in cui un utente può inserire
// 1. una cifra iniziale da scommettere sull'uscita di testa o croce 
// 2. quanto puntare ad ogni scommessa 
// 3. per ogni scommessa l'utente deve puntare su testa (valore 1) oppure su croce (valore 2), se indovina vince il doppio di quanto ha puntato, 
// se non indovina vengono scalati i suoi soldi. 
// L'utente continua a scommettere finché non perde tutti i soldi. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int solditot, lancio, scommessa, testa = 1, croce = 2, min = 1, max = 2, puntata, vincita = 0, tentativi; 
    srand (time(NULL)); 
    
    do {
        printf ("Inserisci quanti soldi totali vuoi giocare: "); 
        scanf ("%d", &solditot); 
    } while (solditot <= 0);
    do{
        printf ("Inserisci quanti soldi vuoi puntare per questo lancio: "); 
        scanf ("%d", &puntata); 
    } while (solditot > puntata);
    
    do {
        solditot = solditot - puntata; 
    } do {
        printf ("Vuoi puntare su testa (1) o croce (2)?");
        scanf ("%d", scommessa);
    } while (scommessa != 1 && scommessa != 2); 
    lancio = rand () % 2+1; 
    tentativi++; 

    if (lancio == scommessa){
        solditot = solditot + puntata*2
        printf ("Hai vinto la scommessa\n")
    }

}
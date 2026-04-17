// Esercizio - Scrivi un programma in C che simuli una cassa. L'utente inserisce i prezzi dei prodotti (in centesimi, numeri interi) uno alla volta, 
// finché non inserisce 0 per terminare. Per ogni prezzo inserito: se è minore di 100 → applica il 5% di sconto, se è tra 100 e 500 → nessuno sconto, 
// se è maggiore di 500 → applica il 10% di sconto.
// Alla fine stampa: il totale senza sconti, il totale con sconti applicati, il risparmio totale, il prodotto più caro e quello meno caro inseriti. 

#include <stdio.h>

int main (){
    int num_prodotti, prezzo, tot = 0, tot_sconti = 0, risparmio = 0, caro, meno_caro, sconto5, sconto10; 

    do {
    printf ("Inserisci il prezzo in centesimi dei prodotti che hai acquistato (uno alla volta), scrivi 0 quando hai finito i prodotti: "); 
    scanf ("%d", prezzo); 
    tot = tot + prezzo;
    if (prezzo < 100){
        sconto5 = prezzo*5/100; 
        sconto5++; 
    } else if (prezzo > 500){
        sconto10 = prezzo*10/100;
        sconto10++; 
    } else {
        
    }
    } while (prezzo == 0); 

    
}

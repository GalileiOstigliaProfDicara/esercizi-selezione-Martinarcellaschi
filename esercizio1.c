//Esercizio - Scrivi un programma in C che simuli il lancio di due dadi (ognuno da 1 a 6) per un numero di volte inserito dall'utente 
//(tra 5 e 20). Per ogni coppia di lanci stampa la somma e un messaggio:
//somma = 2 o 12 → "JACKPOT"
//somma pari → "PARI"
//somma dispari → "DISPARI"
//somma = 7 → "SETTE PORTA FORTUNA" (anche insieme agli altri)
//Alla fine mostra: la somma più alta e quella più bassa ottenute, quante volte è uscito JACKPOT, la media delle somme (con 1 decimale)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int dado1, dado2, min = 1, max = 6, lanci, somma, jackpot = 0, somma_min, somma_max, tot_somme;  
    float media; 
    srand (time(NULL)); 

    do {
    printf ("Inserisci il numero di lanci (compreso tra 5 e 20) che vuoi far fare alla coppia di dadi: "); 
    scanf ("%d", &lanci); 
    } while (lanci < 5 || lanci > 20); 

    for (int i = 0; i < lanci; i++){
        dado1 = rand () % (max - min + 1) + min; 
        dado2 = rand () % (max - min + 1) + min; 
        somma = dado1 + dado2; 
        tot_somme = tot_somme + somma;

        if (somma % 2 != 0){
            printf ("DISPARI\n"); 
            if (somma == 7){
                printf ("SETTE PORTA FORTUNA\n");
            } 
        } else if (somma == 2 || somma == 12){
            printf ("JACKPOT\n");
            jackpot++; 
        } else {
            printf ("PARI\n"); 
        }
    }
     media = tot_somme/lanci; 
        printf ("La media delle somme è: %.1f\n", media);
        printf ("È uscito JACKPOT %d volte\n", jackpot);  
}

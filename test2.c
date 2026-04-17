#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int num_utente, max = 0, min = 1, conta = 0, pari = 0, dispari = 0, random; 
    srand (time(NULL)); 
    printf ("Inserisci un numero: "); 
    scanf ("%d", &num_utente); 
    max = num_utente; 

    do {
        random = rand () % (max - min + 1) + min; 
        conta++; 

        if (random % 2 == 0){
            printf ("PARI\n"); 
            pari++; 
            if (random % 5 == 0){
                printf ("SPECIALE\n"); 
            } 
        } else {
            printf ("DISPARI\n"); 
            dispari++; 
            if (random % 5 == 0){
                printf ("SPECIALE\n"); 
            }
        }
    } while (conta < 100); 

    printf ("È uscito un numero pari %d volte, e un numero dispari %d volte", pari, dispari); 
}
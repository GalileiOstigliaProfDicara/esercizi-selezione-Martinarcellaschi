//2.scrivi un programma in C che gestisca la raccolta fondi di un'associazione benefica: 
//si continua a chiedere soldi all'utente finchè non si raggiunge
//almeno un valore in euro compreso tra 500 e 1000

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    float tot = 0, donazione; 
    int min = 500, max = 1000, obbiettivo; 

    srand (time(NULL)); 
    obbiettivo = rand() % (max - min + 1) + min; 
    printf ("Il tuo obbiettivo è di %d euro\n", obbiettivo);

    do {
        printf ("Inserisci una somma di denaro: "); 
        scanf ("%f", &donazione); 
        if (donazione > 0){
            printf ("Grazie per la donazione\n"); 
            tot = tot + donazione;
        } else if (donazione == 0){
            printf ("Sarà per la prossima\n");             
        } else {
            printf ("Sei un ladro");
        }
        printf ("Mancano %f euro per raggiungere l'obbiettivo\n", obbiettivo - tot); 
    } while (tot < obbiettivo); 
    return 0; 
}
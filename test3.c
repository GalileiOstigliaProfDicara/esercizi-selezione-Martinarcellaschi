#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int min = 0, max = 20, punteggio = 0; 
    srand (time(NULL)); 

    for (int i = 0; i == 0; i++){
        i = rand () % (max - min + 1) + min; 
        printf ("È uscito %d\n", i); 

        if (i >= 10){
            punteggio = punteggio + 1; 
        } else if (i >= 10 && i <= 15){
            punteggio = punteggio + 2; 
        } else if (i > 15){
            punteggio = punteggio + 3; 
        } else if (i + i == 40){
            punteggio = punteggio + 10; 
        }
    }

    if (punteggio < 10){
        printf ("Scarso\n"); 
    } else if (punteggio >= 10 && punteggio <= 20){
        printf ("Ottimo\n"); 
    } else {
        printf ("Ottimo\n"); 
    }
    return 0; 
}
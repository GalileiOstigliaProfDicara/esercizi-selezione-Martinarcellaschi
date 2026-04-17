#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int num, utente, min = 1, max = 10, tentativi = 0; 
    srand (time(NULL)); 
    num = rand () % (max - min + 1) + min; 

    do {
        printf ("Inserici un numero tra 1 e 10: "); 
        scanf ("%d", &utente); 
        tentativi++;
        if (utente > num){
            printf ("Troppo alto\n"); 
        } else if (utente < num){
            printf ("Troppo basso\n");
        }
    } while (utente < num || utente > num); 
    printf ("Hai indovinato in %d tentativi\n", tentativi); 
}
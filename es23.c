// Il programma genera un numero naturale casuale compreso tra 1 e 10 e l’utente deve indovinare il numero generato,
// il programma termina quando viene indovinato.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    srand (time(NULL));
    int num, utente, min = 1, max = 10, conta = 0, tentativi = 3; 
   
    do{
        printf ("Inserisci un numero da 1 a 10: "); 
        scanf ("%d", &utente); 
        if (num != utente){
            printf("Non hai indovinato, riprova!\n");
            conta ++;
            printf ("hai ancora %d tentativi\n", tentativi - conta);
        }
    } while (utente != num && conta < 3);

    if (tentativi > 3){
        printf ("Hai esaurito i tentativi, il numero era: %d\n", num);
    } else {
       printf ("Il numero che hai inserito è uguale a quello generato!\n");
    }
     return 0;
}
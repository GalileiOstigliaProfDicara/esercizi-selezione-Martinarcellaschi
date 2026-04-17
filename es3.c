/*L’utente inserisce a quanti anni si può prendere la patente nello stato in cui si vive 
(in Italia a 18 anni ma in altri stati a 16, 17 o a 21),l’utente inserisce quanti anni ha; 
il programma risponde se l’utente può prendere la patente.*/

#include <stdio.h>

int main(){
    int eta_utente, eta_patente; 
    printf ("Inserisci la tua età: "); 
    scanf ("%d", &eta_utente); 
    printf ("Inserisci a che età si prende la patente nel tuo paese: ");
    scanf ("%d", &eta_patente);

    if (eta_utente >= eta_patente){
        printf ("Puoi prendere la patente\n"); 
    } else {
        printf ("Non puoi prendere la patente\n"); 
    }

    return 0;
}
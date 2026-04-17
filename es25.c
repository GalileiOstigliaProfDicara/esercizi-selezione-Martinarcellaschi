// Il programma genera un numero naturale casuale compreso tra 1 e 100 e l'utente deve indovinare il numero generato ad ogni 
// tentativo il programma dice se il numero inserito era troppo alto o troppo basso; il programma termina quando viene indovinato. 
// Se l'utente indovina in meno di 3 tentativi mostrare "Aura", se ci mette tra 4 e 10 tentativi mostrare "Bravino", altrimento mostrare "Brutto".

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
   int num, utente, min = 1, max = 100, conta = 0;
   srand (time(NULL)); 
   num = rand () % (max - min + 1) + min; 
   
   do{ 
     printf("Inserisci un numero da 1 a 100: \n"); 
     scanf ("%d", &utente); 
     if (utente != num){
         printf ("Non hai indovinato, riprova! "); 
         conta ++; 
     }  
     if (utente > num){
         printf ("Il numero che hai inserito è troppo ALTO\n"); 
     } if (utente < num){
         printf ("Il numero che hai inserito è troppo BASSO\n"); 
     } if (num == utente){
         printf ("Hai indovinato!\n"); 
     }
     
   } while (utente != num); 
   
   if (conta <= 3 && num == utente){
       printf("Aura\n"); 
   } else if (conta <= 10 && num == utente){
       printf ("Bravino\n");
   } else {
       printf ("Brutto\n"); 
   }
   printf ("Ci hai messo %d tentativi\n", conta);
   return 0;
}
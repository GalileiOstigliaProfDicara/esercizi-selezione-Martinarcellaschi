/*Scrivi un programma in C per gestire il riempimento di un serbatoio che ha una capacità massima di 500 litri. 
Il programma deve continuare a chiedere all'utente quanti litri d'acqua vuole aggiungere finché il totale non raggiunge o supera la capacità di 500 litri. 
Al termine, comunica di quanti litri è stata superata la soglia (se presente).*/

#include <stdio.h>

int main (){
    int acqua, somma, limite = 500, sforo = 0; 

   while (somma <= limite){
    printf ("Inserisci quanti litri d'acqua vuoi aggiungere: ");
    scanf ("%d", &acqua); 
    somma = somma + acqua; 
   }
   sforo = somma - limite; 
   printf ("Hai superato il limite di %d litri", sforo); 
}
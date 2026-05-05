/*Scrivi un programma in C che permetta all'utente di riempire un array di 7 elemetni. Dire se l'array è palindromo*/

#include <stdio.h>

int main (){
    int array[7], palindromo;
    
    for (int i = 0; i < 7; i++){
        printf ("Inserisci la cifra numero %d: ", i + 1); 
        scanf ("%d", &array[i]); 
    }
   
    for (int i = 0; i < 7/2; i++){
        if (array[i] == array[6 - i]){
          palindromo++;  
        }
    }
    if (palindromo == 3){
        printf ("L'array è palindromo\n"); 
    }
    
}
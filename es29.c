//Letto un numero in input, dire se quel numero è primo 

#include <stdio.h>

int main (){
    int num, divisore, conta = 0; 
    printf ("Inserisci un numero: \n"); 
    scanf ("%d", &num);
    for (divisore = 1; divisore <= num; divisore++){
        if (num % divisore == 0){
            conta++;
        } 
    }
        if (conta == 2){
            printf ("%d è un numero primo\n", num); 
        } else {
            printf ("%d non è primo\n", num); 
        }
    return 0; 
}
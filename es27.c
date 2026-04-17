//Scrivere i  numeri naturali compresi tra 1 e un numero letto in input estremi esclusi.

#include <stdio.h>

int main (){
    int numero;
    printf ("Inserisci un numero: \n"); 
    scanf ("%d", &numero); 
    for (int i = 1; i < numero; i++){
        printf ("%d - ", i); 
    }
}
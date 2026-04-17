//  Il programma deve continuare a leggere numeri naturali e a calcolarne la somma, 
//fermandosi quando legge uno zero.

#include <stdio.h>

int main (){
    int numero1, numero2, numero3 = 1, somma;
    printf ("Inserisci il primo numero: ");
    scanf ("%d", &numero1); 
    printf ("Inserici il secondo numero: "); 
    scanf ("%d", &numero2); 
    somma = numero1 + numero2;
    printf ("La somma è: %d\n", somma);
    
    while (numero3 != 0){
        printf ("Inserici un'altro numero: "); 
        scanf ("%d", &numero3); 
        somma = somma + numero3; 
        printf ("La somma è: %d\n", somma);
    }
    printf ("Hai inserito uno 0"); 
    return 0; 
}
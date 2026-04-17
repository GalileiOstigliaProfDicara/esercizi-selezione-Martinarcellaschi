/*Il programma legge due numeri e controlla se il primo è maggiore del secondo.*/

#include <stdio.h>

int main(){
     float num1, num2;
     printf("Inserisci il primo numero: \n");
     scanf("%f", &num1); 
     printf ("Inserisci il secondo numero: \n"); 
     scanf ("%f", &num2); 

     if (num1 > num2){
        printf("Il primo numero è maggiore del secondo\n"); 
     } else {
        printf("Il primo numero è minore del secondo\n");
     }
    return 0;
}
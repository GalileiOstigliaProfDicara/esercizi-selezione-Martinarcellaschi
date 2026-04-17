/*Il programma legge tre numeri e li mette in ordine crescente.*/

#include <stdio.h>

int main(){
    int num1, num2, num3; 
    printf ("Inserisci il primo numero: "); 
    scanf ("%d", &num1); 
    printf ("Inserisci il secondo numero: "); 
    scanf ("%d", &num2); 
    printf ("Inserisci il terzo numero: "); 
    scanf ("%d", &num3); 

    if (num1 > num2 && num1 > num2){
        printf ("L'ordine crescende dei numeri che hai inserito è: %d, %d, %d\n", num3, num2, num1); 
    } else if (num2 > num1 && num2 > num3 && num1 > num3){
        printf ("L'ordine crescente dei numeri che hai inserito è: %d, %d, %d\n", num3, num1, num2); 
    } else if (num2 > num1 && num2 > num3 && num1 < num3){
        printf ("L'ordine crescente dei numeri che hai inserito è: %d, %d, %d\n", num1, num3, num2); 
    } else if (num3 > num1 && num3 > num2 && num1 > num2){
        printf ("L'ordine crescente dei numeri che hai inserito è: %d, %d, %d\n", num2, num1, num3); 
    } else {
        printf ("L'ordine crescente dei numeri che hai inserito è: %d, %d, %d\n", num1, num2, num3);
    }

    return 0;
}
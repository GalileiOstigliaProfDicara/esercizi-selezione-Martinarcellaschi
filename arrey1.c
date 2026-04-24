/*Chiedere all'utente e memorizzare in un arrey di 8 celle, 8 numeri reali ì, dopo averli memorizzati calcolare la somma e la media*/

#include <stdio.h>

int main (){
    float array[8], somma, media; 

    for (int i = 0; i < 8; i++){
        printf ("Inserisci un numero reale: "); 
        scanf ("%f", &arrey[i]); 
        somma = somma + arrey[i]; 
    }

    media = somma / 8; 
    printf ("La somma dei valori che hai inserito è %.2f\n", somma); 
    printf ("La media dei valori che hai inserito è %.2f\n", media); 
}
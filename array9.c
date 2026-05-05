/*Riempi un array di 50 elementi con numeri casuali tra 0 e 50. Quindi mostra un messaggio che dica se nell'array i valori sono tutti diversi*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 50

int main (){
    int array[DIM], max = 50, min = 0, conta = 0; 
    srand (time(NULL)); 

    for (int i = 0; i < DIM; i++){
        array[i] = rand () % (max - min + 1) + min;
    }

    for (int i = 0; i < DIM - 1; i++){
        for (int j = i + 1; j < DIM; j++){
            if (array[i] == array[j]){
                conta++;
            }
        }
    }

    if (conta == 0){
        printf ("Non ci sono valori ripetuti\n"); 
    } else {
        printf ("Ci sono dei valori ripetuti\n"); 
    }
    return 0; 
}
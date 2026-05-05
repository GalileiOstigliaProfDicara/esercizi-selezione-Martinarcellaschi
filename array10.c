/*Riempi un array di 100 elementi con numeri casuali tra 0 e 1000. Quindi mostra il valore minimo e massimo contenuti nell'array.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 100

int main (){
    int array[DIM], min = 0, max = 1000, valore_max = 0, valore_min = 1000; 
    srand (time(NULL)); 

    for (int i = 0; i < 100; i++){
        array[i] = rand () % (max - min + 1) + min; 
        printf ("Il %d° numero casuale è uguale a: %d\n", i + 1, array[i]); 
    }

    for (int i = 0; i < 100; i++){
        for (int j = i + 1; j < DIM; j++){
            if (array[j] > array[i] && array[j] >= valore_max){
                valore_max = array[j];
            } else if (array[j] < array[i] && array[j] <= valore_min){
                valore_min = array[j];
            } else {
                valore_max = valore_max; 
                valore_min = valore_min; 
            }
        }
    } 

    printf ("Il valore più alto uscito è il %d, mentre quello più basso è il %d\n", valore_max, valore_min); 

}
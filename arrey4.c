/*Dato un array di 50 elementi riempito con numeri casuali tra 1 e 10, contare e mostrare quanti sono i valori maggiori di 8.*/

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main (){
    int array [50], min = 1, max = 10, conta = 0;
    srand (time(NULL)); 
    
    for (int i = 0; i < 50; i++){
        array[i] = rand () % (max - min + 1) + min; 
    }

    for (int i = 0; i < 50; i++){
        if (array[i] > 8){
            conta++; 
        } 
    }
    
    printf ("I numeri maggiori di 8 sono usciti %d volte\n", conta); 

    return 0;
}
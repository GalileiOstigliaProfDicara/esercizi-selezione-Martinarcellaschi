/*Dato un array di 5000 elementi riempito con numeri casuali tra 1 e 10, contare e mostrare quante volte compare ogni valore tra 1 e 10*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int array[5000], min = 1, max = 10, conta1, conta2, conta3, conta4, conta5, conta6, conta7, conta8, conta9, conta10;
    srand (time(NULL)); 
    
    for (int i = 0; i < 5000; i++){
        array[i] = rand () % (max - min + 1) + min; 
    }

    for (int i = 0; i < 5000; i++){
        if (array[i] == 1){
            conta1++; 
        } else if (array[i] == 2){
            conta2++; 
        } else if (array[i] == 3){
            conta3++; 
        } else if (array[i] == 4){
            conta4++; 
        } else if (array[i] == 5){
            conta5++; 
        } else if (array[i] == 6){
            conta6++; 
        } else if (array[i] == 7){
            conta7++;
        } else if (array[i] == 8){
            conta8++;
        } else if (array[i] == 9){
            conta9++; 
        } else if (array[i] == 10){
            conta10++; 
        }  
    }
    
    printf ("1 è uscito %d volte, 2 è uscito %d volte, 3 è uscito %d volte, 4 è uscito %d volte, 5 è uscito %d volte, 6 è uscito %d volte, 7 è uscito %d volte, 8 è uscito %d volte, 9 è uscito %d volte, 10 è uscito %d volte\n", conta1, conta2, conta3, conta4, conta5, conta6, conta7, conta8, conta9, conta10);
    
    return 0; 
} 
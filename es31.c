//Scrivere un programma che lancia 100 monete e dice quante volte è uscita testa e quante volte è uscita croce 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int moneta, lancio, testa = 0, croce = 1, min = 0, max = 1;
    srand (time(NULL)); 
    printf ("Lancio delle monete\n");
    for (moneta = 1; moneta < 100;){ 
        moneta++;
    printf ("Lancio n°%d\n", moneta);
    lancio = rand() % (max - min + 1) - min; 
    if (lancio == 0){
        testa++;
        printf ("È uscita testa\n");
    } else {
        croce ++;
        printf ("È uscita croce\n");
    }
    }

    printf ("TESTA è uscita %d volte\n", testa); 
    printf ("CROCE è uscita %d volte\n", croce); 

    if (croce > testa){
        printf ("È uscita più volte croce\n");
    } else if (testa > croce){
        printf ("È uscita più volte testa\n"); 
    } else {
        printf ("Testa e croce sono uscite lo stesso numero di volte\n"); 
    }

    return 0;
}
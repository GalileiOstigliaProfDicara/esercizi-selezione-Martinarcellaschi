//Il programma deve continuare a lanciare dadi e a scrivere il risultato, fermandosi quando esce un 6.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    srand (time(NULL));
    int numero, min = 1, max = 6; 
    
    while (numero != 6){
    numero = rand() % (max - min + 1) + min; 
    printf ("Numero casuale generato %d\n", numero);
    }
    
    return 0; 
    
}

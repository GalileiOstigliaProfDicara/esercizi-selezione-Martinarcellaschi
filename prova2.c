//2.scrivi un programma in C che gestisca la raccolta fondi di un'associazione benefica: 
//si continua a chiedere soldi all'utente finchè non si raggiunge almeno 1000 euro.

#include <stdio.h>

int main (){
    int soldi, raccolta = 0;

    do{
        if (raccolta < 1000){
        printf ("Inserisci una somma di denaro per la raccolta fondi: ");
        scanf ("%d", &soldi);
        raccolta = raccolta + soldi; 
        printf ("Ora avete raccolto %d euro\n", raccolta); 
        }
    } while (raccolta <= 1000);
        printf ("Avete raccolto 1000 euro per la raccolta\n"); 
    
    return 0; 
}
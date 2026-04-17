/*Scrivere un programma che legge 2 orari in ore minuti e secondi e dice quale viene
 prima dei due. (Si risolva l’esercizio senza trasformare tutto in secondi).*/

#include <stdio.h>

int main(){
    int ore1, minuti1, secondi1, ore2, minuti2, secondi2;
    printf("Inserisci l'ora del primo orario: ");
    scanf("%d", &ore1);
    printf("Inserici i minuti del primo orario: ");
    scanf("%d", &minuti1);
    printf("Inserici i secondi del primo orario: ");
    scanf("%d", &secondi1);
     printf("Inserisci l'ora del secindo orario: ");
    scanf("%d", &ore2);
    printf("Inserici i minuti del secondo orario: ");
    scanf("%d", &minuti2);
    printf("Inserici i secondi del secondo orario: ");
    scanf("%d", &secondi2);

    if(ore1 < 24 && ore1 >= 0 && minuti1 < 60 && minuti1 >= 0 && secondi1 < 60 && secondi1 >= 0 &&
    ore2 < 24 && ore2 >= 0 && minuti2 < 60 && minuti2 >= 0 && secondi2 < 60 && secondi2 >= 0 ){
        if (ore1 == ore2 && minuti1 == minuti2 && secondi1 == secondi2){
            printf("I due orari inseriti sono uguali\n");
        } else {
            if(ore1 > ore2){
                printf("Il secondo orario viene prima del primo inserito\n");
            } else {
                if(ore1 == ore2 && minuti1 > minuti2){
                    printf("Il secondo orario vine prima del primo inserito\n");
                } else {
                    if(ore1 == ore2 && minuti1 == minuti2 && secondi1 > secondi2){
                        printf("Il secondo orario viene prima del primo inserito\n");
                    } else {
                        printf("Il primo orario vene prima del secondo inserito\n");
                    }
                }
            }
        }
    } else {
        printf("L'orario inserito non è valido!\n");
    }
    return 0;
}
/*  Prendere in input due valori numerici A e B (interi e maggiori di 0).
    N.B. A deve essere maggiore di B (A>B).
    Il programma deve stampare tutti i numeri compresi tra A e B 
    che siano dispari (estremi compresi!). */

    #include <stdio.h>

    int main (){
        int num1, num2; 

        do{
            printf ("Inserisci un numero: "); 
            scanf ("%d", &num1); 
        }while(num1<=0);

        do{
            printf ("Inserisci un altro numero: "); 
            scanf ("%d", &num2); 
        }while(num2 >= num1);

        for (int i = num2; i <= num1; i++){
            if (i % 2 != 0){
                printf ("%d - ", i);
            } 
        }
        return 0; 
    }

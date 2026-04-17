

#include <stdio.h>

int main (){
    int numero, positivi = 0, negativi = 0; 

    while (negativi <= positivi){
    printf("Inserisci un numero: ");
    scanf ("%d", &numero); 
    if (numero > 0){
        positivi++; 
        } else {
            negativi++;
        }
    }
    printf("Hai inserito %d numeri positici e %d numeri negatici", positivi, negativi);   

    return 0;
}
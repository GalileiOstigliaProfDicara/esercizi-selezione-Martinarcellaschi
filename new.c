/*Come utilizzare una variabile che può contenere più valori. Devono essere tutti dello stesso tipo (int, char, float). Questa varabile si chiama
array e posso dargli quanti valori voglio. Ad esempio int arrey [10], in questo modo posso dargli dieci valori diversi. Per assegnargli un valore devo
utilizzare l'indice (tipo "cellette" dove ognuna ne contiene una diversa). Per dargli il valore devo scrivere 
scanf ("%d", &arrey[0(o qualsiasi cella che voglio memorizzare)]); e poi per stamparlo: printf ("%d", arrey[0(o qualsiasi cella che si vuole stampare)]);
Il modo migliore per utilikzzare gli arrey è farli scorrere per vederli tutti uno dopo l'altro, è utilizzare il ciclo for, bisogna scrivere: 
for (int i=0; i < num arrey; i++){ printf ("%d", arrey[i]) }. In questo modo stampo tutte le variabilio contuìenute all'interno della variabile arrey.*/

/*Memorizzare in un arrey di dieci posizioni i primi dieci numeri naturali*/

#include <stdio.h>

int main (){
    int arrey[10]; 

    for (int i = 0; i < 10; i++){
        arrey[i] = i + 1; 
    }
    for (int i = 0; i < 10; i++){
        printf ("%d - ", arrey[i]); 
    }
    return 0; 
}
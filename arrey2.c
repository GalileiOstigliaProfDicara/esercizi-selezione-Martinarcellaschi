#include <stdio.h>

int main (){
    int array[100]; 

    for (int i = 99; i > -1; i--){
        array[i] = 99 - i; 
    }
    for (int i = 0; i < 100; i++){
        printf ("%d\t", array[i]); 
    }
    return 0;
}
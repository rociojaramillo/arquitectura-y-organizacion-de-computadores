#include <stdio.h>

int main(){

    int s[4] = {1, 2, 3, 4};
    int largo = 4;
    //creo una variable de rotacion
    int rotacion = 2; // tomo 2 como ejemplo

    // repito la rotacion de un lugar tantas veces como indique "rotacion"
    for(int r = 0; r < rotacion; r++) {
        // utilizo la logica del ejercicio anterior
        int primero = s[0]; // guardo el que se va a caer en esta iteracion
        
        for(int i = 0; i < largo -1; i++) {
            s[i] = s[i+1];
        }
        
        s[largo-1] = primero; // lo pongo al final
    }


    printf("Arreglo rotado: [");
    for(int i = 0; i < largo; i++) {
        printf("%d", s[i]);
        if(i < largo -1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;

}
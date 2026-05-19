#include <stdio.h>

int main(){

    int s[4] = {1, 2, 3, 4};
    int largo = 4;

    // guardo el primer elemento para no perderlo
    int primero = s[0];

    // muevo todos un lugar a la izquierda
    for(int i = 0; i < largo -1; i++) {
        s[i] = s[i+1];
    }

    s[largo-1] = primero;


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
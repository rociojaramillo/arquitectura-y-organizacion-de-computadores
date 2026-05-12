#include <stdio.h>
#include <stdint.h>

int main() {

    uint32_t palabra = 0xE0000006;

    //aislar los bajos
    //0x7 = 0007 (hexa) = 0000 0000 0000 0111 

    uint32_t bajos = palabra & 0x7;

    //lo corro a los 3 mas importantes al final, despues aplico la mascara
    uint32_t altos = (palabra >> 29) & 0x7;

    int son_iguales = (altos == bajos);

    printf("Palabra analizada: 0x%X\n", palabra);
    printf("3 bits mas altos (en decimal): %u\n", altos);
    printf("3 bits mas bajos (en decimal): %u\n", bajos);
    printf("¿Son iguales? (1=SI, 0=NO): %d\n", son_iguales);

    return 0;


}
#include <stdio.h>

int main() {
    int a = 5;
    int b = 3;
    int c = 2;
    int d = 1;

    printf("%d\n", a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",d);
    // aritmetica básica

    printf("Resultado de a + b * c / d: %d\n", a + b * c / d); // esperado: 11
    printf("Resultado de a%%b: %d\n", a % b); 
    
    // comparaciones lógicas
    printf("Resultado de a == b: %d\n", a == b);
    printf("Resultado de a != b: %d\n", a != b);
    
    // operaciones de bits
    printf("Resultado de a & b: %X\n", a & b);
    printf("Resultado de a | b: %X\n", a | b);
    printf("Resultado de ~a: %X\n", ~a);
    
    
    // desplazamientos
    printf("Resultado de a << 1: %X\n", a << 1);
    printf("Resultado de a >> 1: %X\n", a >> 1);
    
    // operadores de asignación compuesta
    // (cambian el valor de a en la siguiente linea!!)
    printf("Resultado de a += b: %d\n", a + b);
    printf("Resultado de a -= b: %d\n", a - b);
    printf("Resultado de a *= b: %d\n", a * b);
    printf("Resultado de a /= b: %d\n", a / b);
    printf("Resultado de a %%= b: %d\n", a % b);

    return 0;

}

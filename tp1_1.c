#include <stdio.h>

int main()
{
    printf("Hola Mundo \n");

    int num = 10, *p_num;
    p_num = &num; // asignamos la direccion de memoria de una variable al puntero

    printf("Contenido del puntero: %d \n", *p_num);
    printf("La direccion de memoria almacenada por el puntero: %p\n", p_num);
    printf("La direccion de memoria de la variable: %p\n", &num);
    printf("La direccion de memoria del puntero: %p\n", &p_num);
    printf("El tamanio de memoria de la variable 'num' es: %zu bytes\n", sizeof(num));
    printf("El tamanio de memoria del puntero es: %zu bytes\n", sizeof(p_num)); 


    return 0;
}
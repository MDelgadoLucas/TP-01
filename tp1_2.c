#include <stdio.h>

// 4a)
int cuadrado(int num)
{
    int cuadradoDeUnNumero = num * num;
    return cuadradoDeUnNumero;
}

// 4b)
void cuadradoUnNumero(int num)
{
    int cuadradoDeUnNumero = num * num;
    printf("El cuadrado del numero '%d' es: %d \n", num, cuadradoDeUnNumero);
}

// 4c)
void mostrarContenido(int num)
{
    printf("El contenido de la variable 'num' es: %d \n", num);
    printf("La direccion de memoria de la varibale 'num' es: %p \n", &num);
}

// 4d)

void invertir(int a, int b)
{
}
int main()
{
    int numero, a, b;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    printf("Ingrese un numero para la variable 'a': ");
    scanf("%d", &a);

    printf("Ingrese un numero para la variable 'b': ");
    scanf("%d", &b);

    cuadrado(numero);
    cuadradoUnNumero(numero);
    mostrarContenido(numero);
    invertir(a, b);

    return 0;
}
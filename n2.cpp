#include <stdio.h>

int main() {
    int numeros[10];
    int i;
    int menor, mayor;
    int suma = 0;

    // Pedir al usuario que ingrese 10 n�meros
    printf("Ingrese 10 n�meros:\n");
    for (i = 0; i < 10; i++) {
        printf("N�mero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        suma += numeros[i]; // Sumar el n�mero ingresado a la suma total
    }

    // Encontrar el n�mero menor y mayor
    menor = mayor = numeros[0]; // Asignar el primer n�mero como menor y mayor inicialmente
    for (i = 1; i < 10; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i]; // Actualizar el n�mero menor si encontramos uno menor
        }
        if (numeros[i] > mayor) {
            mayor = numeros[i]; // Actualizar el n�mero mayor si encontramos uno mayor
        }
    }

    // Mostrar el n�mero menor, el n�mero mayor y la suma de los n�meros
    printf("El n�mero menor es: %d\n", menor);
    printf("El n�mero mayor es: %d\n", mayor);
    printf("La suma de los n�meros es: %d\n", suma);

    return 0;
}


#include <stdio.h>

int main() {
    int numeros[10];
    int i;
    int menor, mayor;
    int suma = 0;

    // Pedir al usuario que ingrese 10 números
    printf("Ingrese 10 números:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        suma += numeros[i]; // Sumar el número ingresado a la suma total
    }

    // Encontrar el número menor y mayor
    menor = mayor = numeros[0]; // Asignar el primer número como menor y mayor inicialmente
    for (i = 1; i < 10; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i]; // Actualizar el número menor si encontramos uno menor
        }
        if (numeros[i] > mayor) {
            mayor = numeros[i]; // Actualizar el número mayor si encontramos uno mayor
        }
    }

    // Mostrar el número menor, el número mayor y la suma de los números
    printf("El número menor es: %d\n", menor);
    printf("El número mayor es: %d\n", mayor);
    printf("La suma de los números es: %d\n", suma);

    return 0;
}


#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Pedir al usuario que ingrese tres n�meros
    printf("Ingrese el primer n�mero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo n�mero: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer n�mero: ");
    scanf("%d", &num3);
	
    if (num1 < num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num1 < num3) {
        int temp = num1;
        num1 = num3;
        num3 = temp;
    }
    if (num2 < num3) {
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }

    printf("Los n�meros ordenados de mayor a menor son: %d, %d, %d\n", num1, num2, num3);

    int suma;
}


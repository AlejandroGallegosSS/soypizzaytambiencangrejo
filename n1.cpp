#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer número: ");
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

    printf("Los números ordenados de mayor a menor son: %d, %d, %d\n", num1, num2, num3);

    int suma;
}


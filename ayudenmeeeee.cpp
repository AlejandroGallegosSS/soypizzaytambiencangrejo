#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void ordenar(int *a, int *b, int *c) {
    if (*a > *b) {
        swap(a, b);
    }
    if (*b > *c) {
        swap(b, c);
    }
    if (*a > *b) {
        swap(a, b);
    }
}

int main() {
    int num1, num2, num3;
    
    
    printf("Ingrese el primer valor: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo valor: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer valor: ");
    scanf("%d", &num3);
    
    ordenar(&num1, &num2, &num3);
    
    printf("Valores ordenados de menor a mayor: %d, %d, %d\n", num1, num2, num3);
    
    return 0;
}




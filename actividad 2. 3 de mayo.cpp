   #include <stdio.h>
int main() 
{
    int numero;
    int contador = 0;
    int suma = 0;
    do {
        printf("Introduce un numero: ");
        scanf("%d", &numero);
        
        if (numero != 0) {
            contador++; 
            suma += numero; 
            printf("Has introducido el numero: %d\n", numero);
        }
    } while (numero != 0);{
    printf("Finalizado usted a introducido el numero 0 \n");
    
    printf("Se han introducido un total de %d numeros \n",contador);
    
    printf("La suma de los numeros introducidos es: %d",suma);
}

}




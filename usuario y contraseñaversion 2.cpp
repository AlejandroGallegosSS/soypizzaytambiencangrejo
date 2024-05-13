#include <stdio.h>
#include <string.h>

int main() {
    char nombreusuario[20];
    char contra[20];
    int intentosrestantes = 3;

    
    while (intentosrestantes > 0) {
        printf("Nombre de usuario: ");
        scanf("%s", nombreusuario);
        printf("Contraseña: ");
        scanf("%s", contra);
        if (strcmp(nombreusuario, "AlejandroGM") == 0 && strcmp(contra, "2b9") == 0) {
            printf("Bienvenido al sistema, %s\n", nombreusuario);
            return 0; 
        } else {
            printf("Nombre de usuario o contraseña incorrectos.\n");
            intentosrestantes--; 
            if (intentosrestantes > 0) {
                printf("Te quedan %d intentos.\n", intentosrestantes);
            }
        }
    }
    printf("Has superado el número de intentos permitido.\n");
    return 0;
}


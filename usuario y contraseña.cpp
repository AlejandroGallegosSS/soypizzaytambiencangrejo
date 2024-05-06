#include <stdio.h>
#include <string.h>

int main() {
    char nombre_usuario[5];
    char contrasena[5];
    int intentos_restantes = 3;

    
    while (intentos_restantes > 0) {
        printf("Nombre de usuario: ");
        scanf("%s", nombre_usuario);
        printf("Contraseña: ");
        scanf("%s", contrasena);
        if (strcmp(nombre_usuario, "ROOT") == 0 && strcmp(contrasena, "1234") == 0) {
            printf("¡Bienvenido, %s!\n", nombre_usuario);
            return 0; 
        } else {
            printf("Nombre de usuario o contraseña incorrectos.\n");
            intentos_restantes--; 
            if (intentos_restantes > 0) {
                printf("Te quedan %d intentos.\n", intentos_restantes);
            }
        }
    }
    printf("Has superado el número de intentos permitido.\n");
    return 0;
}


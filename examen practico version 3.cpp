#include <stdio.h>
#include <string.h>

int main() {
    char nombreusuario[20];
    char contra[20];
    int intentosrestantes = 3;
    int articulos;
    int suma = 0;
    int i;
    int presio,tot;
    
    while (intentosrestantes > 0) {
        printf("Nombre de usuario: ");
        scanf("%s", nombreusuario);
        printf("Contrase�a: ");
        scanf("%s", contra);
        if (strcmp(nombreusuario, "AlejandroGM") == 0 && strcmp(contra, "2b9") == 0) {
            printf("Bienvenido al sistema, %s\n", nombreusuario);
    while(1){
    	printf("Ingrese el numero de productos :\n");
        scanf("%d",&articulos);
		    if (articulos==0){ 
          break;
        }else if (articulos < 0){
        	printf("deve ser positivo el numero ingresado");
        	continue;
        }
        printf("ingrese el precio por unidad");
        scanf("%d",&presio);
        if(presio<0){
        	printf("el precio no puede ser negativo");
        	continue;
		}
		tot+=articulos*presio;
		}
		printf("el total de la factura es %d",tot);
		return 0;
	}

        } if (intentosrestantes > 0){
            printf("Nombre de usuario o contrase�a incorrectos.\n");
            intentosrestantes--; 
           }else if (intentosrestantes > 0) {
                printf("Te quedan %d intentos.\n", intentosrestantes);
            }
            printf("Has superado el n�mero de intentos permitido.\n");
    return 0;
        }
  

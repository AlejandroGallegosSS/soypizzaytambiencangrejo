#include <stdio.h>
#include <string.h>

int main() {
    char nombreusuario[20];
    char contra[20];
    int intentosrestantes = 3;
    int articulos;
    int i;
    int presio,tot;
    int multiplicacion =0;
    
    while (intentosrestantes > 0) {
        printf("Nombre de usuario: ");
        scanf("%s", nombreusuario);
        printf("Contraseña: ");
        scanf("%s", contra);
        if (strcmp(nombreusuario, "AlejandroGM") == 0 && strcmp(contra, "2b9") == 0) {
            printf("Bienvenido al sistema, %s\n", nombreusuario);}
    do{
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
		multiplicacion+=articulos*presio;
		}while(1);
		printf("el total de la factura es %d",tot);
		return 0; 
	}
	}

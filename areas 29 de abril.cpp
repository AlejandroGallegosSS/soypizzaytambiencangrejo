#include <stdio.h>
#include <math.h>
int main ()
{
	int opc;
float a,b,t,tra,rec,h,to;
	printf("seleccione la opcion q necesita 1) para triangulo 2)para trapecio 3) para rectangulo");
	scanf("%d",&opc);
	switch (opc)
	{
		case 1:
			printf("introdusca la base de su triangulo");
			scanf("%f",&b);
			printf("introduzca la altura de su triangulo");
			scanf("%f",&a);
			t=(b*a)/2;
			printf("el area de su triangulo es igual a %f",t);
			break;
		case 2:
				printf("introdusca la base mayor de su trapecio");
			scanf("%f",&b);
			printf("introduzca la base menor de su trapecio");
				scanf("%f",&a);
			printf("introduzca la altura de su trapecio");
			scanf("%f",&h);
			to=(b+a)/2;
			t=to*h;
			printf("el area de su trapecio es igual a %f",t);
			break;
			case 3:printf("introdusca la base de su rectangulo");
			scanf("%f",&b);
			printf("introduzca la altura de su rectangulo");
			scanf("%f",&a);
			t=(b*a);
			printf("el area de su rectangulo es igual a %f",t);
			break;
	}
}

#include <stdio.h>
int main(){
	float salario,horas,totl,porc;
	printf("introdusca el total de horas trabajadas");
	scanf("%f",&horas);
	printf("introdusca la cantidad de su salario por hora");
	scanf("%f",&salario);
	if(horas==40){
		totl=40*salario;
		printf("su salario total es de %f",totl);
		}else if(horas>40){
			porc=(horas*salario);
			totl=porc+(horas*0.5);
			printf("su paga total es de %f",totl);
	}else if(horas>=50){
		totl=(40*salario)*2;
		printf("su salario es igual a %f",totl);
	}
}

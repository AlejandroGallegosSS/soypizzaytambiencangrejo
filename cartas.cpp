#include <stdio.h>
int main(){
	int carta;
printf("introdusca el numero de carta ");
scanf("%d",&carta);
if(carta==1){
	printf("su carta es un as");
}else if(carta==10){
	printf("su carta es una sota ");
}else if(carta==11){
	printf("tu carta es un caballo");
}else if(carta==12){
	printf("su carta es un rey");
}else if(carta>1 && carta<9){
printf("su carta no es ningua figura ni tampoco as");
} else if (carta==8||carta==13||carta>12){
	printf("no esd ningun numero de carta de la baraja española");}
}

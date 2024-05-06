//elevar potencia estructura repetitiva
#include <stdio.h>
int main(){
int num,poten,i;
printf("introdusca el numero que quiere elevevar ");
scanf("%d",&num);
   printf("introduzca la potencia ");
   scanf("%d",&poten);
   for(int i; i<=num; i+=poten){
   	i=num*num;
   	printf("el resultado de la potencia es %d",i);
   }
}

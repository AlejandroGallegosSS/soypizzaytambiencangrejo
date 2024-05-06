#include <stdio.h>
#include <math.h>
int main(){
int num,poten,tot;
printf("introdusca el numero que quiere elevevar ");
scanf("%d",&num);
   printf("introduzca la potencia ");
   scanf("%d",&poten);
   tot=pow(num,poten);
   printf("el resultado es %d",tot);
}



#include <stdio.h>
int main(){
int op,lados,a;

printf("digite para escolher a operacao:");
scanf("%d",&op);
printf("digite o valor do lado:");
scanf("%d",&lados);

printf("\n");
switch(op){
case 3:
    a=lados*lados*1.73/4;
    printf("Triangulo: %d",a);
break;
case 4:
    a=lados*lados;
    printf("Quadrado: %d",a);
break;
case 6:
    a=6*lados*lados*1.73/4;
    printf("Hexagono: %d",a);
break;
default:
    printf("nao sei calcular a area");
break;

}

return 0;
}

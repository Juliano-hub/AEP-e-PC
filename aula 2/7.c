#include <stdio.h>

int main(){
int numero[7],i,x=0;

for(i=0;i<=6;i++){
printf("digite um numero:\n");

scanf("%d",&numero[i]);

if(numero[i]%2!=0){
        printf("\n");
printf("%d eh par!",numero[i]);
printf("\n");
x=x+numero[i];
}
}
printf("\n");
printf("soma de pares eh:%d",x);
return 0;
}

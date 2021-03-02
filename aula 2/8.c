#include <stdio.h>

int main(){
int numero[6],i,par=0,impar=0;

for(i=0;i<=5;i++){
printf("digite um numero:\n");
scanf("%d",&numero[i]);

if(numero[i]%2==0){
par=par+1;

}else{
impar=impar+1;
}
}

printf("\n");
printf("numero de pares:%d\n",par);
printf("numero de impares:%d\n",impar);
return 0;
}


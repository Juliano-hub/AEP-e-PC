#include <stdio.h>
int main(){
int nota;

printf("digite a nota:");
scanf("%d",&nota);

if(nota<30){
printf("reprovado");

printf("\n");
}

if(nota<70 && nota>=30){
printf("exame");
printf("\n");
}

if(nota>=70){
printf("aprovado");
}

return 0;
}

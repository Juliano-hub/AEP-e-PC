#include <stdio.h>
int main(){
int idade;
printf("digite sua idade:");
scanf("%d",&idade);
printf("\n");
if(idade >= 18){
printf("Parab�ns, voc� j� tem idade para tira a sua carteira!");
}else{
printf("fim");
}
printf("\n");
return 0;
}

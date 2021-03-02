#include <stdio.h>
int main(){
int idade;
printf("digite a sua idade:\n");
scanf("%d",&idade);

printf("\n");

if(idade<18 || idade>67){
printf("solucao 2:nao pode doar sangue");
printf("\n");
}

if(idade>=18 && idade<=67){
printf("solucao 1:pode doar sangue");
printf("\n");
}




return 0;
}

#include <stdio.h>
#include <string.h>

int i,somaD=0,soma=0;

struct cadastro{
int numeroCHEQUE;
int numeroAGENCIA;
int conta;
char nome[100];
float valor;
}p[3];

void Lregistro(){
printf("entre com numero do cheque,numero da agencia,conta,nome,valor.\n");
for(i=0;i<3;i++){
scanf("%d %d %d %s %f",&p[i].numeroCHEQUE,&p[i].numeroAGENCIA,&p[i].conta,&p[i].nome,&p[i].valor);
}
}

void Soma1(){
printf("soma de cheque da pessoa:");
for(i=0;i<3;i++){
if(strcmp(p[i].nome)==0){
 soma+=p[i].valor;
}
}
printf("%d",soma);
}

void Soma2(){
printf("soma de cheque da agencia:");
for(i=0;i<3;i++){
if((p[i].numeroAGENCIA)==0){
 somaD+=p[i].numeroCHEQUE;
}
}
printf("%d",somaD);
}

int main (){
Lregistro();
Soma1(p[3],p[i].nome[100]);
Soma2(p[3],p[i].numeroAGENCIA);
}

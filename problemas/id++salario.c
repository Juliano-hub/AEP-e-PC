#include <stdio.h>
int main (){
int ID,H,V,S;
printf("digite o ID:");
scanf("%d",&ID);
printf("digite valor de horas trabalhadas:");
scanf("%d",&H);
printf("digite o valor recebido em 1 hora:");
scanf("%d",&V);

S = H*V;

printf("ID: %d\n",ID);
printf("SALARIO:%d\n",S);
return 0;
}

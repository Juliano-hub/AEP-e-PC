#include <stdio.h>
int main(){
int v[10000],quantidade,i,j,n,aux;

printf("digite a quantidade de valores:\n");
scanf("%d",&quantidade);

for(i=0;i<quantidade;i++){
printf("digite um valor para o vetor:\n");
scanf("%d",&v[i]);

}

for ( i=0; i < quantidade-1; i++ ){
for ( j=0; j < quantidade-1; j++ ){
if ( v[j] > v[j+1] ){
aux=v[j];
v[j]=v[j+1];
v[j+1]=aux;
}
}
}

printf("vetor:\n");

for(i=0;i<quantidade;i++){
printf("%d\n",v[i]);

}



return 0;
}

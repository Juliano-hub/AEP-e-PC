#include <stdio.h>

void retira(int x[],int y);
void printa(int x[],int y);

int main(){
int n,i,vetor[10000];

printf("Digite o tamanho:\n");
scanf("%d",&n);

for(i=0;i<n;i++){
scanf("%d",&vetor[i]);
}

retira(vetor,n);
printa(vetor,n);


return 0;
}

void retira(int x[],int y){
int i,j;
for(i=0;i<y;i++){
if(x[i]==x[i+1]){
x[i]=0;
}
}
}

void printa(int x[],int y){
int i;
for(i=0;i<y;i++)
printf("%d",x[i]);
}

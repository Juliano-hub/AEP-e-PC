#include <stdio.h>
int vetor[100],i,j,somaT=0,media;

void escanearOvetor(){
printf("Digite 100 valores:\n");
for(i=0;i<100;i++){
scanf("%d",&vetor[i]);
}
printf("\n");
}

void SomarOvetor(){
for(i=0;i<100;i++){
int soma;
soma=vetor[i];
somaT+=soma;
}
printf("soma total:\n%d", somaT);
printf("\n");
}

void FazerAmediaDoVetor(){
media=somaT/100;
printf("\nMedia:\n%d", media);
printf("\n");
}

void MenorQueZeroRecebeZero(){
printf("\nTodos numeros menores que zero recebem zero:\n");
for(i=0;i<100;i++){
if(vetor[i]<0){
vetor[i]=0;
}
printf("%d ", vetor[i]);
}
printf("\n");
}

void RepitidoRecebeZero(){
printf("\nTodos numeros repitidos recebem zero:\n");
for(i=0;i<100;i++){
for(j=0;j<100;j++){

if(vetor[i]==vetor[j]&&i!=j){
vetor[i]=0;
vetor[j]=0;
}
}
printf("%d ",vetor[i]);
}
printf("\n");
}

int main(){
escanearOvetor(vetor[100]);
SomarOvetor(vetor[100]);
FazerAmediaDoVetor(vetor[100]);
MenorQueZeroRecebeZero(vetor[100]);
RepitidoRecebeZero(vetor[100]);
return 0;
}




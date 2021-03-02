//Juliano Strelow Buss
//Turma M5

#include <stdio.h>
int main(){
int n,i,somatorio=0;
printf("valor do inteiro:\n");
scanf("%d",&n);

for(i=1;i<=n;i++){

if(n%i==0){
somatorio=somatorio+i;
}
}

printf("o somatorio eh: %d",somatorio);

return 0;
}

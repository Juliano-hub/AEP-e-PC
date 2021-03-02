#include <stdio.h>

int primo(int x);

int main(){
int a;
scanf("%d",&a);

if((primo(a)) > 2){
	printf("nao eh primo");

}else{
printf("eh primo");
}
return 0;
}

int primo(int x){
int i,contador=0;

for(i=1;i<=x;i++){

if((x%i)==0){
contador++;
}

}

return contador;
}

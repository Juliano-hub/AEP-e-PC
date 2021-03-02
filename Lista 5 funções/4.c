//Juliano Strelow Buss - 18201744

#include <stdio.h>

int amigo(int x,int y);

int main(){
int a,b;
scanf("%d %d",&a,&b);

if(amigo(a,b)==amigo(b,a) && amigo(b,a)==amigo(a,b)){
printf("sao amigos");
}else{
printf("nao sao amigos");
}
return 0;
}

int amigo(int x,int y){
int reserva=0,i;

for(i=1;i<x;i++){

if(x%i==0){
reserva=reserva+i;
}
}

if(reserva==y){
	return 1;
}else{
	return 0;	
}	
}

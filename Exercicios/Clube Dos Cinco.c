#include <stdio.h>
int main(void){
int n;
int a,b,c,d,e,f,g;

scanf("%d %d %d %d %d %d %d %d",&n,&a,&b,&c,&d,&e,&f,&g);

if(n>=1 && n<=10000 && a>=1 && a<=n && b>=1 && b<=n && c>=1 && c<=n && d>=1 && d<=n && e>=1 && e<=n && f>=1 && f<=n && g>=1 && g<=n){

if(n==g+a+b+c-d-e-f){
printf("N");

}else{

printf("S");
}

}else{

printf("numero invalido");
}
return 0;
}



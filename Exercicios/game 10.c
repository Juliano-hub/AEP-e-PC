#include <stdio.h>
int main(){
int a,n,d,b=0;
scanf("%d %d %d",&n,&d,&a);
if(n>=3 && n<=100 && d>=1 && a<=n){

while(d!=a){
 if(a < n){
a++;
 }else{
a=1;
}
b++;
}
    printf("%d",b);
 }else{
    printf("numero invalido");
}
}

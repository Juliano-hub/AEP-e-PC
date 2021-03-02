#include <stdio.h>
int main(){
int c,n,d,,t=0,X=-1,soma=0,a[20000],i;
scanf("%d",&n);
scanf("%d",&d);

if(n >= 2 && n <= 1000000 && d >= 1 && d <= 1000000000){

for(i=0;i<n;i++){
scanf("%d",&c);

if(c >= 1 && c <= 1000){
a[i] = c;
a[n+i] = c;
}
}
for(i=0;i<n;i++)
{
while(X + 1 < i + n && soma < d){
    soma += a[++X];
}
if(soma == d){
t++;
}
soma -= a[i];
}
printf("%d\n", t);

    }else{

printf("numero invalido");
}
return 0;
}

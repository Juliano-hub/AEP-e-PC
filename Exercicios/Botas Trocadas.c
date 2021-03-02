#include <stdio.h>
int main(){
int n,t=0,i,f;
scanf("%d",&n);

    if(n>=2 && n<=10000 && n%2==0){

int a[n],m[n];
char b[n];
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    scanf("%s",&b[i]);
}
for(i=0;i<n;i++){
    for(f=0;f<n;f++){
    if(a[i] == a[f] && (b[i] == 'D' && b[f] == 'E' || b[i] == 'E' && b[f] == 'D')){
    t++;
}
}
}
printf("%d",t/2);

    }else{

printf("numero invalido");
}
}

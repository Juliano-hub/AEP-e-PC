#include <stdio.h>
int a,b,mmc=0,i,temp=0;

void Scanf(){
printf("digite 2 numeros:\n");
scanf("%d %d",&a,&b);
}

void MMC(){
if(b>a){
temp=a;
a=b;
b=temp;
}
if((a%b)==0){
mmc=a;

}else{
for(int i=2;i<=b;i++){
temp=a*i;
if((temp%b)==0){
mmc=temp;
i=b+1;
}
}
}
printf("\nO MMC entre %d e %d eh:%d\n",a,b,mmc);
}

int main(){
Scanf(a,b);
MMC(a,b);
return 0;
}

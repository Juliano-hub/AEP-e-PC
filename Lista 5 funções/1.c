#include <stdio.h>
int media(int a,int b,int c);
int optativa(int x,int y,int z);


int main(){
int N1,N2,MT;
scanf("%d %d %d",&N1,&N2,&MT);

if(media(N1,N2,MT)>=7){
printf("\n aprovado por media. \n");
}else{
printf("\n nota que precisa para a optativa: %d \n",optativa(N1,N2,MT));

}


return 0;
}


int media(int a,int b,int c){
int m=0;

m=(a+b+c)/3;

return m;
}


int optativa(int x,int y,int z){
int v=0;

v=  10 - media(x,y,z);

return v;
}

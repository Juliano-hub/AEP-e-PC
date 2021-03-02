#include <stdio.h>
int main(){
int p,d1,d2,n=0,r=0;
scanf("%d %d %d",&p,&d1,&d2);

if(d1>=0 && d1<=5 && d2>=0 && d2<=5){

if((d1+d2)%2==0){

   if(p==0){
    printf("0\n");
  }else{
   printf("1\n");
}

}else{

if(p==0){
printf("1\n");
} else {
printf("0\n");
}
}
}else{
printf("numero invalido");
}
return 0;
}

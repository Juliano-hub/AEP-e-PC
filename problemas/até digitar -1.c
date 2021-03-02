#include <stdio.h>
int main (){
int num,media=0,n=0;
printf("digite um numero:");
scanf("%d",&num);
while(num!=-1){
    media=num+media;
   n++;
    printf("digite outro numero:");
    scanf("%d",&num);
}
media=media/n;
printf("a media eh:%d",media);
return 0;
}

#include <stdio.h>
int main(){
int A,B,C;
int H,L;

scanf("%d %d %d",&A,&B,&C);
scanf("%d %d",&H,&L);

if(A>=1 && A<=100 && B>=1 && B<=100 && C>=1 && C<=100 && H>=1 && H<=100 && L>=1 && L<=100){

int passa=(A<=H && B<=L) || (B<=H && C<=L) || (C<=H && A<=L) ||
          (B<=H && A<=L) || (C<=H && B<=L) || (A<=H && C<=L);

if (passa){
printf("S");
}else{
printf("N");
}
}else{
    printf("numero invalido");
}
  return 0;
}

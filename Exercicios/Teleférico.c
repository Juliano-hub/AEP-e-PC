#include <stdio.h>
int main (){
int C,A,resposta,quociente,resto;
scanf("%d",&C);
scanf("%d",&A);

if (C>=2 && C<=100 && A>=1 && A<=1000){

quociente=A/(C-1);

resto=A%(C-1);

resposta=quociente;

if(resto>0){

resposta=resposta +1;
}
    printf("%d",resposta);

}else {

    printf("numero invalido");
}
return 0;
}

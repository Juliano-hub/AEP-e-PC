#include <stdio.h>
#include <math.h>
int main (){
int num,multi,divid,num1,num2,num3,num4,op,raiz,num6,num5,quadrado;
printf("1. Verifique se um numero e par ou impar.\n");
printf("2. Multiplicar dois numeros.\n");
printf("3. Dividir dois numeros.\n");
printf("4. Raiz quadrada de um numero.\n");
printf("5. Elevar um numero ao quadrado.\n");
scanf("%d",&op);

switch(op){
case 1:
printf("digite um numero:");
scanf("%d",&num);
if(num%2==0){
printf("par");
}else{
printf("impar");
}
break;
case 2:
printf("digite dois numeros:");
scanf("%d %d",&num1,&num2);
multi=num1*num2;
printf("%d",multi);
break;
case 3:
printf("digite dois numeros:");
scanf("%d %d",&num3,&num4);
divid=num3/num4;
printf("%d",divid);
break;
case 4:
printf("digite um numero:");
scanf("%d",&num5);
raiz=sqrt(num5);
printf("%d",raiz);
break;
case 5:
printf("digite um numero:");
scanf("%d",&num6);
quadrado=num6*num6;
printf("%d",quadrado);
break;
}
return 0;
}

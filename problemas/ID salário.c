#include <stdio.h>
int main (){
int SENHA;
printf("digite uma senha:");
scanf("%d",&SENHA);
if (SENHA==1234){
    printf("senha correta!");
} else {
    printf("senha incorreta");
}
return 0;
}

#include <stdio.h>

int fatorial(int *x);

int main(){
int N,*ponteiro;
scanf("%d",&N);

ponteiro=&N;

printf("%d",fatorial(ponteiro));
return 0;
}

int fatorial(int *x){
if(*x==0 || *x==1){
return 1;

}else{

int a=1,i;
for(i=*x;i>0;i--){
a=a*i;
}

return a;
}
}

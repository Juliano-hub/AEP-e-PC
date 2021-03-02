#include <stdio.h>
int main(){
int L2,L1,N,i;
L1=0;
scanf("%d",&N);

if(N>=1 && N<=100000){

    for(int i=0;i<N;i++){
    scanf("%d", &L2);
    if(L2==2)
    L1=1-L1;
     }
 printf("%d %d",N%2,L1);

}else{

    printf("numero invalido");
    }
    return 0;
}

#include <stdio.h>
int main(){
int C1,L1,C2,L2;
scanf("%d %d %d %d",&C1,&L1,&C2,&L2);

int A1=C1*L1;
int A2=C2*L2;

if(C1>=1 && L1>=1 && C2>=1 && L2>=1 && C1<=100 && L1<=100 && C2<=100 && L2<=100){
    if(A1 > A2){
    printf("%d",A1);
}else{
    printf("%d",A2);
}

}
else{
    printf("numero invalido");
}
return 0;
}

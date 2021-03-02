#include <stdio.h>

int fatorial(int x);

int main(){
int N;
scanf("%d",&N);

printf("%d",fatorial(N));

return 0;
}


int fatorial(int x) {
    if (x == 0){
        return 1;
    }else{
        return (x * fatorial(x - 1));
}
}

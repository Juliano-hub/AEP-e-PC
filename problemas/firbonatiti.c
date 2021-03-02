#include <stdio.h>
int main (){

int f[10],n,i;

f[0] = 0;
f[1] = 1;
for(i=2;i<10;i++){
   f[i] = f[i-1]+f[i-2];
}
for(i=0;i<10;i++){
printf("%d\n",f[i]);
}
}

#include <stdio.h>
int main(){
int mat[4]={10,30,3,4}, *p, x;

p= mat + 1;
//p= mat++;
//p= ++mat;
x=(*mat)+ 1;

printf("%d %d",*p,x);

return 0;
}

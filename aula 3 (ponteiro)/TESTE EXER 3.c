#include <stdio.h>
int main(){
int i=9,j=10,*p,*q;
//p = &i;
//*q = &j;
//p = &*&i;
//i = (*&)j;
//i = *&j;
//i = *&*&j;
//q = *p;
//i = (*p)++ + *q ;
printf("%d %d %d %d",i,j,*p,*q);
return 0;
}

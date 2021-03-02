#include <stdio.h>
int main(){

int b,i=3,j=5;
float conta;

int *p, *q;
p = &i;
q = &j;

b =(*p) - (*q);
conta = 3 - *p/(*q)+7;

printf("a) %d \n",p);

printf("b) %d \n",b);

printf("c) %d \n",**&p); // pega o valorapontado pelo ponteiro

printf("d) %f \n",conta);


return 0;
}

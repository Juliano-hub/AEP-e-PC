#include <stdio.h>
#include <string.h>

void imprimi(char a[80]);
void escreve(char a[80]);
void substring(char a[80],char b[80]);

int main(){
char linha[80],substring[80];

escreve(linha);
substring(linha,substring);
imprimi(substring);

return 0;
}

void escreve(char a[80]){
char c;
int i=0;

while((c=getchar()) != '\n'){
a[i]=c;
i++;
}
}

void imprimi(char a[80]){
int i=0;

for(i=0;i<strlen(a);i++){
printf("%c",a[i]);
}
}

void substring(char a[80],char b[80]){
int i=0,j=0;

for(i=0;i<strlen(a);i++){
for(j=i;j<strlen(a);j++){




}
printf("\n");
}
}

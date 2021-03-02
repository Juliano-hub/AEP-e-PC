#include <stdio.h>
#include <string.h>

int main(){
char c,palavra[1000],i=0,vogais;

while((c=getchar()) && c!='\n'){
palavra[i]=c;
i++;
}
palavra[i]='\0';

printf("\n");
printf("palavra: \n");
for(i=0;i<strlen(palavra);i++){
printf("%c",palavra[i]);
}

for(i=0;i<strlen(palavra);i++){
if(palavra[i]=='a'||palavra[i]=='e'||palavra[i]=='i'||palavra[i]=='o'||palavra[i]=='u'||palavra[i]=='A'||palavra[i]=='E'||palavra[i]=='I'||palavra[i]=='O'||palavra[i]=='U'){
vogais++;
}
}

printf("\n");
printf("numero de vogais: %d\n",vogais);
return 0;
}

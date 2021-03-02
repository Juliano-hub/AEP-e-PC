//Juliano Strelow Buss
//Turma M5
#include <stdio.h>

int main(){
int NUMempregados,NUMbici;
float VALORsalario,CUSTObici;
float acrescimo,bikeTOTAL,LUCRO,valorBIKETOTAL,salarioFINAL,comissao,salarioBONUS,salarioX;

printf("Digite o numero de empregados da loja:");
scanf("%d",&NUMempregados);
printf("Digite o valor do salario minimo:");
scanf("%f",&VALORsalario);
printf("Digite o preco de custo de cada bicicleta:");
scanf("%f",&CUSTObici);
printf("Digite o numero de bicicletas vendidas:");
scanf("%d",&NUMbici);

acrescimo = (CUSTObici*50)/100;

valorBIKETOTAL= CUSTObici + acrescimo;

comissao = (CUSTObici*15)/100;

bikeTOTAL = valorBIKETOTAL*NUMbici;

salarioFINAL = (VALORsalario*2)*NUMempregados;

salarioBONUS = comissao/NUMempregados;

salarioX = (VALORsalario*2) + salarioBONUS;

LUCRO = (salarioFINAL + comissao) - bikeTOTAL;

printf("\n");
printf("O lucro liquido da loja eh:%2.f \n",LUCRO);
printf("O salario final de cada empregado eh:%2.f \n",salarioX);
return 0;
}

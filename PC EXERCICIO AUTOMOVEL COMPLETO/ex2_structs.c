// Nome: Juliano Strelow Buss
// Matr�cula: 18201744

#include <stdio.h>
#include <stdlib.h>

#define MAX 100
#define LUCROMIN 0.15
#include "minha_bib.h"

/*

Nesse exerc�cio voc� implementar� um programa de computador para gerenciar a compra e
venda de ve�culos por uma empresa. A empresa vai iniciar suas atividades com
um caixa inicial, comprar e vender ve�culos para obter lucro (ou preju�zo, afinal nem
todos s�o bons administradores de neg�cio).

Verifique as atividades comentadas nesse "esqueleto" do programa
e finalize sua implementa��o. Verifique sua nota caso esse exerc�cio fosse a avalia��o

Boa sorte! Alison

*/

int main()
{
	automovel estoque[MAX];

	int caixa = 0, lucro = 0;
	int escolha;


	//(1.0) fa�a a leitura do caixa inicial da empresa

	printf("Digite o valor do caixa inicial:\n");
    scanf("%d",&caixa);

	cria_lista(estoque);

	for (;;) {
		escolha = menu();
		switch (escolha) {
		case 1:
			// implemente essa fun��o no arquivo minha_bib.h
			comprar(estoque, &caixa);
			break;
		case 2:
			// implemente essa fun��o no arquivo minha_bib.h
			vender(estoque, &caixa, &lucro);
			break;
		case 3:
			// implemente essa fun��o no arquivo minha_bib.h
			imprime(estoque);
			break;
		case 4:
			// crie e implemente uma fun��o no arquivo minha_bib.h
			// para mostrar o financeiro da empresa (caixa e lucro)
            financeiro(&caixa,&lucro);
			break;
		case 5:
			exit(0);
			break;
		}
	}
	return 0;
}

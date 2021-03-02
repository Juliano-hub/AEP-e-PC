// Nome: Juliano Strelow Buss
// Matrícula: 18201744

#include <stdio.h>
#include <stdlib.h>

#define MAX 100
#define LUCROMIN 0.15
#include "minha_bib.h"

/*

Nesse exercício você implementará um programa de computador para gerenciar a compra e
venda de veículos por uma empresa. A empresa vai iniciar suas atividades com
um caixa inicial, comprar e vender veículos para obter lucro (ou prejuízo, afinal nem
todos são bons administradores de negócio).

Verifique as atividades comentadas nesse "esqueleto" do programa
e finalize sua implementação. Verifique sua nota caso esse exercício fosse a avaliação

Boa sorte! Alison

*/

int main()
{
	automovel estoque[MAX];

	int caixa = 0, lucro = 0;
	int escolha;


	//(1.0) faça a leitura do caixa inicial da empresa

	printf("Digite o valor do caixa inicial:\n");
    scanf("%d",&caixa);

	cria_lista(estoque);

	for (;;) {
		escolha = menu();
		switch (escolha) {
		case 1:
			// implemente essa função no arquivo minha_bib.h
			comprar(estoque, &caixa);
			break;
		case 2:
			// implemente essa função no arquivo minha_bib.h
			vender(estoque, &caixa, &lucro);
			break;
		case 3:
			// implemente essa função no arquivo minha_bib.h
			imprime(estoque);
			break;
		case 4:
			// crie e implemente uma função no arquivo minha_bib.h
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

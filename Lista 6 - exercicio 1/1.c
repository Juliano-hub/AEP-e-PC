#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
#include "bib.h"

// (1 pt) altere a organiza��o do programa de maneira a deixar apenas a fun��o
// principal (main()) no arquivo ex1.c
// e a estrutura e fun��es utilizadas em uma bibilioteca chamada minha_bib.h

int main()
{
	int escolha;

	cria_lista();
	for (;;) {
		escolha = menu();
		switch (escolha) {
		case 1:
		    clear();

			insere();

            pause();
			break;
		case 2:
		    clear();

			apaga();

			pause();
			break;
		case 3:
		    clear();

			imprime();

			pause();
			break;
		case 4:
			exit(0);
			break;
		}
	}
	return 0;
}

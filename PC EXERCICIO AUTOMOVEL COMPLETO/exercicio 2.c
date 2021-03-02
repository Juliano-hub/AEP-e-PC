#include <stdio.h>
#include <stdlib.h>

#define MAX 100
#define LUCROMIN 0.15

/*

Nesse exercício você implementará um programa de computador para gerenciar a compra e
venda de veículos por uma empresa. A empresa vai iniciar suas atividades com
um caixa inicial, comprar e vender veículos para obter lucro (ou prejuízo, afinal nem
todos são bons administradores de negócio).

Verifique as atividades comentadas nesse "esqueleto" do programa
e finalize sua implementação. Verifique sua nota caso esse exercício fosse a avaliação

*/

// (1.0) voce deve criar a estrutura automovel, contendo os campos nome, marca,
// modelo, ano, quilometragem, valor_compra, valor_venda
typedef struct{
	char nome[100];
	char marca[100];
	char modelo[100];
	int ano;
	int quilometragem;
	int valor_compra;
	int valor_venda;
} automovel;

void pause();
void clear();
int menu(void);
void ler_string(char palavra[100], int tamanho);
void cria_lista(automovel *p);
int livre(automovel p[100]);

void imprime(automovel *p);
void comprar(automovel *p, int *caixa);
void vender(automovel *p, int *caixa, int *lucro);
void financeiro(int *caixa,int *lucro);

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

void pause(){
	printf("Digite qualquer tecla para continuar");
	getchar();
}

void clear(){
	system("cls");
	//system("clear");
}

int menu(void)
{
	clear();
	int c = 0;
	do {
		printf("-- MENU:\n");
		printf("\t 1. Comprar um automovel\n");
		printf("\t 2. Vender um automovel\n");
		printf("\t 3. Listar Estoque\n");
		printf("\t 4. Mostrar Financeiro\n");
		printf("\t 5. Sair\n");
		printf("-- Digite sua escolha: ");
		scanf("%d", &c);
	} while (c <= 0 || c > 5);
	getchar();
	return c;
}

void ler_string(char palavra[100], int tamanho)
{
	int i = 0;
	char c;

	c = getchar();
	while ((c != '\n') && (i < tamanho)) {
		palavra[i++] = c;
		c = getchar();
	}
	palavra[i] = '\0';

	if (c != '\n') {
		c = getchar();
		while ((c != '\n') && (c != EOF)) {
			c = getchar();
		}
	}

}

void cria_lista(automovel *p)
{
	int i;
	for (i = 0; i < MAX; i++)
		p[i].nome[0] = '\0';
}

int livre(automovel p[100])
{
	int i;
	for (i = 0; p[i].nome[0] && i < MAX; i++) ;
	if (i == MAX)
		return -1;
	return i;
}


// (1.0) implemente essa função para mostrar o estoque de veículos da empresa
void imprime(automovel *p){
    clear();
int i=0;

	for (i = 0; i < MAX; i++){
		if (p[i].nome[0] != '\0') {
	printf("-- Registro %d:\n", i);
	printf(" Nome: %s \n",p[i].nome);
	printf(" Marca: %s \n",p[i].marca);
	printf(" Modelo: %s \n",p[i].modelo);
	printf(" ano: %d \n",p[i].ano);
	printf(" quilometragem: %d \n",p[i].quilometragem);
	printf(" valor da compra: %d \n",p[i].valor_compra);
        }
	}

pause();
}


// implemente essa função para realizar a compra de um veículo
void comprar(automovel *p, int *caixa){
    clear();
	// essa parte do código, retorna o indice do vetor onde o registro pode ser inserido
	// não altere ela, apenas utiliza esse indice na sua implementação

int posicao=0,AUXlucroMIN = 0;
char escolha;

posicao = livre(p);
    if (posicao == -1) {
		printf("\nEstrutura Cheia!!");
		return;
	}

	// (1.0) aqui voce deve implementar seu código: mostre mensagens e faça
	// a leitura das informações do veículo comprado. Não esqueça de testar
	// se o valor do veículo é menor que o caixa da empresa, se não for,
	// a empresa não deve ser capaz de realizar a compra

printf("-- Registro %d:\n", posicao);
	printf("\t Nome: ");
        ler_string(p[posicao].nome,100);
	printf("\t Marca: ");
        ler_string(p[posicao].marca,100);
	printf("\t Modelo: ");
        ler_string(p[posicao].modelo,100);
	printf("\t Ano: ");
        scanf("%d", &p[posicao].ano);
	printf("\t Quilometragem: ");
        scanf("%d", &p[posicao].quilometragem);
	printf("\t Valor de compra: ");
        scanf("%d", &p[posicao].valor_compra);

	if( p[posicao].valor_compra > *caixa ){
        p[posicao].nome[0] = '\0';

        printf("\nA empresa nao eh capaz de realizar a compra! \n");
        printf("\n");

	}else{

AUXlucroMIN = (float) LUCROMIN * p[posicao].valor_compra;

	    printf("Deseja aceitar um valor sugerido(Lucro Minimo de 15 porcento) = '%d' ?(Y/N)\n",AUXlucroMIN);
                getchar();
                    scanf("%c",&escolha);

	    if(escolha == 'N' || escolha == 'n'){

    printf("\nDigite outro valor de venda:\n");
    scanf("%d", &p[posicao].valor_compra);

    *caixa = (*caixa) - p[posicao].valor_compra;
        printf("\ncompra realizada! \n");

        }else{

           p[posicao].valor_compra = (float) AUXlucroMIN;

            *caixa = *caixa - (float) p[posicao].valor_compra;

        printf("\n compra realizada! \n");
            }

        }

	// (1.0) ao invés de ler diretamente o valor de venda do veículo, implemente uma função
	// que sugere o valor de venda baseado na constante LUCROMIN (lucro minimo).
	// Dê ao usuario a opção de aceitar o valor sugerido ou digitar um valor desejado.
	// atualize o valor de venda baseado nessa escolha.

    getchar();
	pause();
}


// implemente essa função para realizar a compra de um veículo
void vender(automovel *p, int *caixa, int *lucro){
    clear();
	int posicao=0,i=0,opcao,lucroAUX=0,incremento;

	printf("Digite o numero do Registro:\n");
	scanf("%d", &posicao);

	// (1.0) Verifique primeiro se esse veículo está em estoque, ou seja
	// p[posicao].nome[0] != '\0', caso não esteja, mostre uma mensagem para
	// ele verificar o estoque

while(i != posicao){
i++;
}

		if (p[posicao].nome[0] != '\0') {
	printf("-- Registro %d:\n", i);
	printf(" Nome: %s \n",p[i].nome);
	printf(" Marca: %s \n",p[i].marca);
	printf(" Modelo: %s \n",p[i].modelo);
	printf(" ano: %d \n",p[i].ano);
	printf(" quilometragem: %d \n",p[i].quilometragem);
	printf(" valor da compra: %d \n",p[i].valor_compra);


	printf("\n");

	printf("-- Opcoes de compra:\n");
    printf("1) comprar o veiculo pelo valor de venda do registro.\n");
    printf("2) digitar algum outro valor de venda.\n");
    printf("3) voltar para o menu principal.\n");
    scanf("%d",&opcao);

    if(opcao== 3)
        return;

    if(opcao == 1){
    *lucro = p[i].valor_compra;

        p[posicao].nome[0] = '\0';
    }else{
        printf("digite o valor:\n");
        scanf("%d",&lucroAUX);
        *lucro = *lucro + lucroAUX;

        p[posicao].nome[0] = '\0';
    }

        }else{
        printf("\n");
        printf("\nveiculo nao encontrado!! verifique o estoque!!!\n");
        }


	//(1.0) depois ofereça ao usuário as seguintes opções:
	// 1 - vender o veículo pelo valor de venda do registro
	// 2 - digitar o valor de venda

	// (1.0) após a confirmação do valor de venda, atualize o estoque

	// (1.0) atualize também o caixa e o lucro da empresa

lucroAUX = 0;



    getchar();
	pause();
}


// (1.0) implemente essa função para mostrar o financeiro da empresa
void financeiro(int *x,int *y){
    clear();
    *x = *x+*y;
	printf("FINANCEITO - %d\n", *x );

*y = 0;

	pause();
}

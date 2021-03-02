// Nome: Juliano Strelow Buss
// Matr�cula: 18201744

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


// (1.0) implemente essa fun��o para mostrar o estoque de ve�culos da empresa
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


// implemente essa fun��o para realizar a compra de um ve�culo
void comprar(automovel *p, int *caixa){
    clear();
	// essa parte do c�digo, retorna o indice do vetor onde o registro pode ser inserido
	// n�o altere ela, apenas utiliza esse indice na sua implementa��o

int posicao=0,AUXlucroMIN = 0;
char escolha;

posicao = livre(p);
    if (posicao == -1) {
		printf("\nEstrutura Cheia!!");
		return;
	}

	// (1.0) aqui voce deve implementar seu c�digo: mostre mensagens e fa�a
	// a leitura das informa��es do ve�culo comprado. N�o esque�a de testar
	// se o valor do ve�culo � menor que o caixa da empresa, se n�o for,
	// a empresa n�o deve ser capaz de realizar a compra

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

	// (1.0) ao inv�s de ler diretamente o valor de venda do ve�culo, implemente uma fun��o
	// que sugere o valor de venda baseado na constante LUCROMIN (lucro minimo).
	// D� ao usuario a op��o de aceitar o valor sugerido ou digitar um valor desejado.
	// atualize o valor de venda baseado nessa escolha.

    getchar();
	pause();
}


// implemente essa fun��o para realizar a compra de um ve�culo
void vender(automovel *p, int *caixa, int *lucro){
    clear();
	int posicao=0,i=0,opcao,lucroAUX=0,incremento;

	printf("Digite o numero do Registro:\n");
	scanf("%d", &posicao);

	// (1.0) Verifique primeiro se esse ve�culo est� em estoque, ou seja
	// p[posicao].nome[0] != '\0', caso n�o esteja, mostre uma mensagem para
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


	//(1.0) depois ofere�a ao usu�rio as seguintes op��es:
	// 1 - vender o ve�culo pelo valor de venda do registro
	// 2 - digitar o valor de venda

	// (1.0) ap�s a confirma��o do valor de venda, atualize o estoque

	// (1.0) atualize tamb�m o caixa e o lucro da empresa

lucroAUX = 0;



    getchar();
	pause();
}


// (1.0) implemente essa fun��o para mostrar o financeiro da empresa
void financeiro(int *x,int *y){
    clear();
    *x = *x+*y;
	printf("FINANCEITO - %d\n", *x );

*y = 0;

	pause();
}


struct end {
	char nome[100];
	char rua[100];
	char cidade[100];
	char estado[100];
	unsigned long int cep;
} info[MAX];


void pause(){
	printf("Digite qualquer tecla para continuar");
	getchar();
}

void clear(){
	system("cls");
	//system("clear");
}

void cria_lista(void)
{
	int i;
	for (i = 0; i < MAX; i++)
		info[i].nome[0] = '\0';
}

int livre(void)
{
	int i;
	for (i = 0; info[i].nome[0] && i < MAX; i++) ;
	if (i == MAX)
		return -1;
	return i;
}

int menu(void)
{
    clear();

	int c = 0;
	do {
		printf("-- MENU:\n");
		printf("\t 1. Inserir um nome\n");
		printf("\t 2. Excluir um nome\n");
		printf("\t 3. Listar o arquivo\n");
		printf("\t 4. Sair\n");
		printf("-- Digite sua escolha: ");
		scanf("%d", &c);
	} while (c <= 0 || c > 4);
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



// (3.0 pts) Altere essa função para inicialmente ler o nome a ser inserido
	// e verificar se ele já existe antes de inserir
	// (use a função de busca que vc deve implementar na próxima questão).
	// Se ele já existe, mostrar uma mensagem dizendo que aquele registro já existe
	// e enserar a execução da função

void insere(void){

char nomeAUX[100];
int i=0,posicao;

	posicao = livre();
	if (posicao == -1) {
		printf("\nEstrutura Cheia!!");
		return;
	}

printf("-- Registro %d:\n", posicao);


printf("\t Nome:");
ler_string(nomeAUX,100);

for(i=0;i<=posicao;i++){
if((strcmp(nomeAUX,info[i].nome)) == 0 ){

    printf("\nJa existe esse nome no registro!\n");
    pause();
    clear();
    return;

}
}

i=0;
while(i < 100){
info[posicao].nome[i] = nomeAUX[i];
i++;
}

	printf("\t Rua: ");
	ler_string(info[posicao].rua, 100);
	printf("\t Cidade: ");
	ler_string(info[posicao].cidade, 100);
	printf("\t Estado: ");
	ler_string(info[posicao].estado, 100);
	printf("\t CEP: ");
	scanf("%lu", &info[posicao].cep);

	getchar();
}

// (3.0 pts) alterar essa função para realizar a busca do resgistro a ser
	// apagado pelo campo nome
	// implementar uma função que retorna a posição do resgistro com aquele nome,
	// caso encontrado,
	// e perguntar ao usuário se ele realmente deseja apagar aquele registro

void apaga(void)
{

	int posicao,op=0,i=0;
    char nomeAUX[100],resposta;

printf("--Deseja apagar:\n");
printf("1)Pelo nome.\n");
printf("2)Pelo registro.\n");
scanf("%d",&op);

getchar();

if(op == 1){
    printf("\nNome da pessoa:\n");
    ler_string(nomeAUX,100);


    while(i<MAX){
        if((strcmp(info[i].nome,nomeAUX)) == 0 ){

                 printf("\nDeseja realmente apagar esse registro?(Y/N)\n");
        scanf("%c",&resposta);
                if(resposta == 'Y' || resposta == 'y'){

        info[i].nome[0] = '\0';
        printf("\nFeito!\n");
        getchar();
        return;
                }else{
                return;
                }
        }else{
        i++;
    }
    }
printf("\nNome nao encontrado!\n");


}

if(op == 2){

	printf("\nnumero do Registro: ");
	scanf("%d", &posicao);

getchar();

printf("\nDeseja realmente apagar esse registro?(Y/N)\n");
        scanf("%c",&resposta);

                if(resposta == 'Y' || resposta == 'y'){
	if (posicao >= 0 && posicao < MAX)
		info[posicao].nome[0] = '\0';

getchar();

		printf("\nFeito!\n");
}else{
return;
}
}


}

	// (3.0 pts) altere essa função para perguntar ao usuário se ele quer
	// imprimir todos os registros
	// ou um registro específico, caso ele deseje um registro específico
	// permitir a busca do registro pelo nome
	// usar a função de busca implementada anteriormente para retornar
	// a posição e imprimir ela

void imprime(void)
{

int i=0,resposta;
char nomeAUX[100];
printf("Deseja:\n");
printf("1)Listar um registro especifico\n");
printf("2)Listar todos os registros\n");
scanf("%d",&resposta);

getchar();

if(resposta == 1){
    printf("\nNome da pessoa:\n");
    ler_string(nomeAUX,100);


    while(i<MAX){
        if((strcmp(info[i].nome,nomeAUX)) == 0 ){

            printf("-- Registro %d:\n", i);
			printf("\t Nome: %s", info[i].nome);
			printf("\t Rua: %s", info[i].rua);
			printf("\t Cidade: %s", info[i].cidade);
			printf("\t Estado: %s\n", info[i].estado);
			printf("\t CEP: %lu\n", info[i].cep);

printf("\n");
        return;

        }else{
        i++;
    }
    }
printf("\nNome nao encontrado!\n");

    return;
}




if(resposta == 2){
	for (i = 0; i < MAX; i++)
		if (info[i].nome[0] != '\0') {
			printf("-- Registro %d:\n", i);
			printf("\t Nome: %s", info[i].nome);
			printf("\t Rua: %s", info[i].rua);
			printf("\t Cidade: %s", info[i].cidade);
			printf("\t Estado: %s\n", info[i].estado);
			printf("\t CEP: %lu\n", info[i].cep);
		}
}
}

#include <stdio.h>
#include <stdlib.h>

int main(){

	system("clear");

	char nome[30];
	char resposta[20];
	char caracter;
	int i = 0;
	int r = 0;
	int n = 0;

	system("sleep 0.1");
	system("sleep 0.1");
	printf("********************************************$$$$*******************************\n");
	system("sleep 0.2");
	printf("*#!;=*****************#FFFse***************************************************\n");
	system("sleep 0.3");
	printf("****************$$**************888888888888***magic#$all*******--******victime\n");
	system("sleep 0.1");
	printf("****ideolZ|sm!?******---*****88//////////////88********************************\n");
	system("sleep 0.2");
	printf("***************bluesky#$.>*88//////////////////882*#2d111**********************\n");
	system("sleep 0.2");
	printf("*********************-*-288//////////////////////88**********341231//**********\n");
	system("sleep 0.2");
	printf("*#!$Fddd***********hard28/////////ESCRITOS/////////8******!@#ff***********...**\n");
	system("sleep 0.2");
	printf("*********************--8////////////0.1/////////////8**************************\n");
	system("sleep 0.4");
	printf("********''231''****lin8//////////////////////////////8***magnifiC*3************\n");
	system("sleep 0.2");
	printf("*********************88///////000//////////000///////88***************----*****\n");
	system("sleep 0.3");
	printf("**********sarh89r0f*-88//////000000//////000000//////88/***********************\n");
	system("sleep 0.2");
	printf("**....***************-88//////0000////////0000//////88/****34***aldie#!cf******\n");
	system("sleep 0.2");
	printf("********************21388///////////////////////////88Oske31saliem..>:*********\n");
	system("sleep 0.2");
	printf("*********68fd3mans******8////////////000///////////8***************************\n");
	system("sleep 0.2");
	printf("********************.>ds**8/////////00000////////8fire!#about******************\n");
	system("sleep 0.5");
	printf("*98-*21942fd*ffffd*fds*****8-///////////////////8***********1987(d*********i@f*\n");
	system("sleep 0.2");
	printf("******************gnew*******8////////////////8****more|get!*******************\n");
	system("sleep 0.2");
	printf("****--!******************2#li8//00/00//00//0//8-*42****************************\n");
	system("sleep 0.1");
	printf("************chroo324r#!Ss****8//00/00//00//0//8**************>**&&cia98********\n");
	system("sleep 0.2");
	printf("***-*23$$$*************dgEE**8///1/11//11//1//8*#&&!emr************************\n");
	system("sleep 0.2");
	printf("******************fusion-*****8//////////////8****************------***********\n");
	system("sleep 0.1");
	printf("**ativism**********************88888888888888**********************************\n");
	system("sleep 0.1");
	printf("******-----**********;#*****************************--**********charac@#*******\n");
	system("sleep 0.4");
	printf("*******************************************************************************\n");
	system("sleep 0.1");
	printf("** >  -------------------------------------------------------------------  < **\n");
	printf("**                                                                           **\n");
	system("sleep 0.1");
	printf("**                             -------------                                 **\n");
	printf("**                             - BEM VINDO -                                 **\n");
	printf("**                                                                           **\n");
	printf("**                 Se expressar não é esperar um sorriso.                    **\n");
	system("sleep 0.3");
	printf("**                 ______________________________________                    **\n");
	printf("**                                                                           **\n");
	printf("**                      - Aperte ENTER para entrar -                         **\n");
	printf("**                                                                           **\n");
	printf("**                               gNew 2014                                   **\n");
	system("sleep 0.1");
	printf("**                                                                           **\n");
	printf("** >   ------------------------------------------------------------------  < **\n");
	printf("*******************************************************************************\n");
	printf("*******************************************************************************\n");

	getchar();

	system("clear");

	printf("\nQual seu nome? \n");

	do {

		caracter = getchar();
		nome[i] = caracter;
		++i;

	} while (caracter != '\n');

	nome[i - 1] = '\0';

	system("sleep 0.3");
	printf("\nConectando");
	printf(" .");
	printf(" .");
	system("sleep 0.2");
	printf(" .");
	system("sleep 0.4");
	printf("\n\n... Conectado!\n");

	system("sleep 0.2");

	printf("\nOlá %s, você acaba de entrar para o serviço secreto. FBI. \n", nome);
	system("sleep 2");
	printf("Sua primeira missão é procurar por pistas sobre um cyberterrorista que está destruindo acessos do governo.\n");
	system("sleep 4");
	printf("\n- Está pronto para começar!?\n");

	i = 0;

	while(r != 1){

		do {
			caracter = getchar();
			resposta[i] = caracter;
			++i;
		} while (caracter != '\n');

		resposta[i - 1] = '\0';
		i = 0;

		if(strcmp(resposta,"sim") == 0){
			printf("OK! Vamos lá!\n");
			r = 1;
		}	else if(strcmp(resposta,"nao") == 0){
			printf("Você não merece estar aqui!\n");
			return 0;
		}	else {
			printf("Digite \"sim\" ou \"nao\"\n");
			i = 0;
		}

		// limpa resposta
		for (n = 0; n <= 20; ++n){
			resposta[n] = ' ';
		}
	}

	i = 0;
	r = 0;

	system("sleep 1");
	printf("\nSabemos que as conexões estão vindo de uma ilha localizada ao Sul da Itália.\n");
	system("sleep 2");
	printf("Precisamos descobrir qual essa ilha.\n");
	system("sleep 0.5");
	printf("\n- Teria algum palpite?\n");

		while(r != 1){

		do {
			caracter = getchar();
			resposta[i] = caracter;
			++i;
		} while (caracter != '\n');

		resposta[i - 1] = '\0';
		i = 0;

		if(strcmp(resposta,"Capri") == 0){
			printf("Parece que as conexões batem com a ilha de Capri, Parabéns!\n");
			system("sleep 2");
			printf("Buscando informações...\n");
			system("sleep 2");
			r = 1;
		} else if(strcmp(resposta,"capri") == 0){
			printf("Parece que as conexões batem com a ilha de Capri, Parabéns!\n");
			system("sleep 2");
			printf("Buscando informações...\n");
			system("sleep 2");
			r = 1;
		} else if(strcmp(resposta,"ilha de capri") == 0){
			printf("Parece que as conexões batem com a ilha de Capri, Parabéns!\n");
			system("sleep 2");
			printf("Buscando informações...\n");
			system("sleep 2");
			r = 1;
		} else if(strcmp(resposta,"ilha de Capri") == 0){
			printf("Parece que as conexões batem com a ilha de Capri, Parabéns!\n");
			system("sleep 2");
			printf("Buscando informações...\n");
			system("sleep 2");
			r = 1;
		} else if(strcmp(resposta,"nao") == 0){
			printf("Parece que temos um preguiçoso. Procure mais!\n");
			printf("\n- Algum outro palpite?\n");
			i = 0;
		} else if(strcmp(resposta,"nao sei") == 0){
			printf("Encara a vida dessa forma? Desistindo?\n");
			printf("\n- Algum outro palpite?\n");
			i = 0;
		} else {
			printf("Não bate com as conexões... =/\n");
			printf("\n- Algum outro palpite?\n");
			i = 0;
		}

		// limpa resposta
		for (n = 0; n <= 20; ++n){
			resposta[n] = ' ';
		}

	}

	i = 0;
	r = 0;

	printf("Capri é uma comuna italiana da região da Campania, província de Nápoles, com cerca de 7.058 habitantes.\n");
	system("sleep 5");
	printf("Localiza-se na Ilha de Capri no mar Tirreno.\n");
	system("sleep 3");
	printf("\n\nEstamos separando sua passagem, vamos a Itália!!! Bom voou.\n");
	system("sleep 5");
	system("clear");
	system("sleep 1");
	printf("\nEstamos montando uma pequena base no Hotel Capri Tiberio Palace.\n");
	system("sleep 2");
	printf("\nPeça um taxi e vá o mais rápido possivel ao Hotel.\n");
	printf("\n- O que gostaria de fazer?\n");

	while(r != 1){

		do {
			caracter = getchar();
			resposta[i] = caracter;
			++i;
		} while (caracter != '\n');

		resposta[i - 1] = '\0';
		i = 0;


		if(strcmp(resposta,"taxi") == 0) {
			printf("A caminho do hotel...\n");
			r = 1;
		} else if(strcmp(resposta,"pedir taxi") == 0) {
			printf("A caminho do hotel...\n");
			r = 1;
		} else if(strcmp(resposta,"chamar taxi") == 0) {
			printf("A caminho do hotel...\n");
			system("sleep 2");
			r = 1;

		} else {
			printf("Peça um taxi! Não desvie seu caminho!\n");
		}

				// limpa resposta
		for (n = 0; n <= 20; ++n){
			resposta[n] = ' ';
		}

	}





	i = 0;
	r = 0;

	system("sleep 3");
	printf("*taxista* - São 43 dólares senhor.\n\n");
	system("sleep 2");
	printf("%s, em seu quarto você está equipado com roupas, computadores, dinheiro.\n", nome);
	system("sleep 4");
	printf("\n- Existe um relatório sobre a mesa, deseja abrir?\n");

	while(r != 1){

		do {
			caracter = getchar();
			resposta[i] = caracter;
			++i;
		} while (caracter != '\n');

		resposta[i - 1] = '\0';
		i = 0;


		if(strcmp(resposta,"sim") == 0) {
			r = 1;
		} else if(strcmp(resposta,"claro") == 0) {
			r = 1;
		} else if(strcmp(resposta,"abrir") == 0) {
			r = 1;
		} else if(strcmp(resposta,"ok") == 0) {
			r = 1;
		} else {
			printf("Se não quer trabalhar conosco, fique livre. Adeus.\n");
			system("sleep 3");
			return 0;
		}

				// limpa resposta
		for (n = 0; n <= 20; ++n){
			resposta[n] = ' ';
		}

	}

	printf("\n\n- FICHA SECRETA -\n");
	printf("-----------------\n");
	printf("\n");
	printf("NOME:\n");
	printf("NICKNAME: fe4r\n");
	printf("IDADE: 26\n");
	printf("\n");
	printf("ACUSAÇÂO:\n");
	printf("Membro de um grupo de hacktivistas chamado: Th3 Gh0sts\n");
	printf("está realizando uma serie de invasões a sites e servidores\n");
	printf("governamentais, a procura de informações secretas, afim de\n");
	printf("divulgar a população.\n");
	printf("\n");
	printf("Seu objetivo é: Capturar o hacker\n");
	printf("Você tem 12 horas para localizalo.\n");
	printf("Temos um informante a sua espera, em uma casa de striper a \n");
	printf("dois quarteiroes a oeste. O nome dele é: Knock\n");
	printf("Sua senha é: 6317. Seja discreto.\n");

	system("sleep 5");

	printf("\n\nPrecione ENTER para continuar...\n");
	getchar();

	system("clear");

	i = 0;
	r = 0;

	printf("\nMúsica alta, mulheres nuas dançando, você chega a casa de stripper.\n");
	system("sleep 2");
	printf("Anda devagar sobre as mesas, afim de localizar o informante.\n");
	system("sleep 2");
	printf("Um homem se levanta e lhe chama para sentar com ele.\n");
	system("sleep 2");
	printf("Alto, branco, cabelos longos presos, com óculos escuros mesmo dentro\ndaquele ambiente nada claro. \n");
	system("sleep 3");
	printf("\nVocê se aproxima, vai perguntar o nome dele?\n");

		while(r != 1){

		do {
			caracter = getchar();
			resposta[i] = caracter;
			++i;
		} while (caracter != '\n');

		resposta[i - 1] = '\0';
		i = 0;

		system("sleep 1");
		if(strcmp(resposta,"sim") == 0) {
			printf("\n*homem* - Meu nome não interessa, mas sou conhecido como Knock.\n");
			r = 1;
		} else if(strcmp(resposta,"vou") == 0) {
			printf("*\nhomem* - Meu nome não interessa, mas sou conhecido como Knock.\n");
			r = 1;
		} else if(strcmp(resposta,"nome") == 0) {
			printf("\n*homem* - Meu nome não interessa, mas sou conhecido como Knock.\n");
			r = 1;
		} else if(strcmp(resposta,"perguntar nome") == 0) {
			printf("\n*homem* - Meu nome não interessa, mas sou conhecido como Knock.\n");
			r = 1;
		} else {
			printf("\nOk.\n");
			r = 1;
		}

				// limpa resposta
		for (n = 0; n <= 20; ++n){
			resposta[n] = ' ';
		}

	}

	i = 0;
	r = 0;

	system("sleep 1");
	printf("*homem* - Qual a senha?\n");

	while(r != 1){

		do {
			caracter = getchar();
			resposta[i] = caracter;
			++i;
		} while (caracter != '\n');

		resposta[i - 1] = '\0';
		i = 0;

		system("sleep 1");
		printf("\n");
		if(strcmp(resposta,"6317") == 0) {
			printf("*homem* - Ok! Vamos ser breve.\n");
			r = 1;
		} else if(strcmp(resposta,"nao sei") == 0) {
			printf("*homem* - Desculpe não posso lhe ajudar.\n");
			printf("\nVocê perdeu nosso informante, não temos como localizar o alvo.\n");
			printf("Adeus\n");
			return 0;
		} else {
			printf("Você errou!\n");
			printf("\nPerdeu nosso informante, não temos como localizar o alvo.\n");
			printf("Adeus\n");
			return 0;
		}

				// limpa resposta
		for (n = 0; n <= 20; ++n){
			resposta[n] = ' ';
		}

	}

	i = 0;
	r = 0;

	system("sleep 1");
	printf("*homem* - O hacker que você procura utiliza uma rede privada no IRC para \n");
	system("sleep 4");
	printf("comunicação com seu grupo, o nome dessa rede é: #tgmanifest\n");
	system("sleep 4");
	printf("*homem* - Isso é tudo o que posso lhe dar, adeus.\n");
	system("sleep 8");
	system("clear");
	printf("Volta ao quarto do hotel, agora cansado da viajem, tira o casaco,\n");
	system("sleep 2");
	printf("procura uma cerveja no freegobar, tira a gravata, senta na frente do seu computador.\n");
	system("sleep 2");
	printf("Aperta o botão de power do copmutador, sistema sendo carregado.\n");
	system("sleep 5");
	printf("Aguarde...\n");
	system("sleep 5");
	printf("\nAcessa a rede IRC, qual canal deseja entrar?\n");

	while(r != 1){

		do {
			caracter = getchar();
			resposta[i] = caracter;
			++i;
		} while (caracter != '\n');

		resposta[i - 1] = '\0';
		i = 0;

		system("sleep 1");
		printf("\n");
		if(strcmp(resposta,"tgmanifest") == 0) {
			printf("\nOK! Encontrado! #tgmanifest\n");
			system("sleep 1");
			printf("Conectando...\n");
			r = 1;
		} else if(strcmp(resposta,"#tgmanifest") == 0) {
			printf("\nOK! Encontrado! #tgmanifest\n");
			system("sleep 1");
			printf("Conectando...\n");
			r = 1;
		} else if(strcmp(resposta,"nao sei") == 0) {
			printf("\nSe não quer trabalhar volte para casa homem.\n");
		} else {
			printf("\nRede não encontrada... tente denovo:\n");
		}

				// limpa resposta
		for (n = 0; n <= 20; ++n){
			resposta[n] = ' ';
		}

	}

	i = 0;
	r = 0;

	system("sleep 2");
	printf("\nUma mensagem aparece em sua tela: \n");
	system("sleep 2");
	printf("\n\n*anon* - %s Estavamos lhe esperando.\n", nome);
	system("sleep 4");
	printf("*anon* - Para acessar nossa sala você precisa descriptografar um simples codigo: \n");
	system("sleep 2");
	printf("\n*anon* - nkdgtfcfg\n");
	system("sleep 2");
	printf("\n*anon* - Precisa de uma dica? OK! vou ser bonzinho contigo. sua dica é: Cifra de Cézar.\n");
	printf("*anon* - Aguardo sua resposta.\n\n");
	printf("A Cifra de Cezar é um tipo de criptografia que se baseia em tranformar uma letra em outra letra para frente ou para traz no alfabeto.\n");
	printf("Por exemplo, se o numero escolhido é = 3, então o A se tranforma em D. Sendo que A-B-C-D. A + 3 = D.\n");
	printf("Identifique o numero utilizado para criptografia e resolva a questão.\n");

		while(r != 1){

		do {
			caracter = getchar();
			resposta[i] = caracter;
			++i;
		} while (caracter != '\n');

		resposta[i - 1] = '\0';
		i = 0;

		system("sleep 1");
		printf("\n");
		if(strcmp(resposta,"liberdade") == 0) {
			printf("CONECTADO!\n");
			r = 1;
		} else if(strcmp(resposta,"nao sei") == 0) {
			printf("Sabia que era burro, mais nem tanto.\n");
			printf("Pense um pouco quem sabe consegue.\n");
		} else {
			system("sleep 1");
			printf("Acesso não permitido.\n");
			system("sleep 1");
			printf("Tente novamente: \n");
		}

				// limpa resposta
		for (n = 0; n <= 20; ++n){
			resposta[n] = ' ';
		}

	}


	return 0;

}

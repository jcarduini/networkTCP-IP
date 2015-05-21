#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"api-client.h"
int agenda(char* message)
{

	int op;
	char name[10] ,tel[10];
	message = (char*)malloc(25);

	printf("Digite a opção desejada:\n");
	printf("1 - Armazena/Atualiza Registro\n");
	printf("2 - Remove Registro\n");
	printf("3 - Acessa Registro\n");
	printf("4 - Finaliza Aplicação\n");
	printf("Opção: ");
	scanf("%d",&op);
	printf("antes do switch\n");	
	switch(op){
	printf("dentro do switch\n");
	case 1: 
		printf("Digite o nome do usuário: \n");
		scanf("%s",name);
		printf("Digite o telefone do usuário: \n");
		scanf("%s",tel);
		strcpy(message, "add?");
		strcat(message, name);
		strcat(message, "=");
		strcat(message, tel);
		printf("%s\n", message);
		return 1;
//		return message;
	case 2: 
		printf("Digite o nome do usuário: \n");
		scanf("%s",name);
		strcpy(message, "rmv?");
		strcat(message, name);
		strcat(message, "=");
		printf("%s", message);
		return 2;
//		return message;		
	case 3: 
		printf("Digite o nome do usuário: \n");
		scanf("%s",name);
		strcpy(message, "fnd?");
		strcat(message, name);
		strcat(message, "=");
		printf("%s", message);
		return 3;
//		return message;
	case 4: return 0;

	default: printf("Opção Inválida, digite novamente!\n");
		return 0;
//		 agenda();
	}
//	return 0;
}

/*char* monta(const char op[4]){
		
const char* message[25];
	strcpy(message,op);
//	strcat(*message,name);
//	strcat(*message,campo);
	return message;
}*/
/*const char* response(const char* message){
	char[3] op = message[

	}
*/

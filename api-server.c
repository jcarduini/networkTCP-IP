#include<stdio.h>
#include<string.h>


const char* response(const char* message)
{
        char[3] op;
	memcpy( op, message, 3);
	FILE *fp;
	

	if (strcmp(op, add))
	{
		fp = fopen("Contacts", "a+");
		if (fp == NULL)
			printf("Falha para abrir o arquivo Contacts\n");
		
			
		
	
	}
		
			
	
	if (strcmp(op, rmv))
	if (strcmp(op, fnd))

}

const char* getName (const char* message){


	int i = 1;
	const char name = message[0];
	while (strcmp(message[i] != "=")){
		strcat(name,message[i]);
		i++;
	}
	return name;
}

const char* getNumber (const char* message){
	int size = strlen(message);
	int i = 1;
	while (strcmp(message[i] != "=")){
		i++;
	}
	const char tel = message[i++];
	i++;
	while (i<size)
	{
		strcat(tel,message[i]);
		i++;
	}
}

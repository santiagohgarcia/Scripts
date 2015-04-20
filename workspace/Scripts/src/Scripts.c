/*
 ============================================================================
 Name        : Scripts.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {


	if(execMapper("/home/utnso/archivo1.txt","/home/utnso/archivo_salida.txt", "/home/utnso/script.sh") == 0)
	 {
	   printf("se genero el archivo OK");
	 }
	 else
	 {
	   printf("no se genero el archivo");
	 }

}

int execMapper (char* arch_in,char* arch_out, char* script)
{
	char *command;

	command = malloc(sizeof(char)*100);

	command = strcat(command, script);
	command = strcat(command, " ");
	command = strcat(command, arch_in);
	command = strcat(command, " > ");
	command = strcat(command, arch_out);

	return system(command);


}

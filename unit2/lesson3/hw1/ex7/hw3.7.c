/*
 ============================================================================
 Name        : 7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x[1000];
		int counter=0,i;
		printf("enter stirig :");
		fflush(stdin);fflush(stdout);
		gets(x);
		for(i=0;x[i]!='\0';i++)
		{

		}
		printf("length of string %d \t",i);

	return EXIT_SUCCESS;
}

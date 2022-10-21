/*
 ============================================================================
 Name        : 3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char string[20];
	char *ptr=string;
	int size=0;
    char reverse[20];
    char *strr=reverse;

	printf("enter any string \n");
	fflush(stdin);fflush(stdout);
	scanf("%s",string);
	while(*ptr)
	{
		ptr++;
		size++;
	}
	for(int i=size; i>=0;i--)
	{
		ptr--;
		strr++;
		*strr=*ptr;

	}
	*strr='\0';
	printf("%s",reverse);



	return EXIT_SUCCESS;
}

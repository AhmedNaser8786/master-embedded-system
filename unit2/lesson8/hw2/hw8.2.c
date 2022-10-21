/*
 ============================================================================
 Name        : 2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int alpha[27];
	int *ptr=&alpha[0];
	for(int i=0;i<=25;i++)
	{
	*ptr=i+'A';
	ptr++;

	}
	ptr=alpha;
	for(int i=0;i<=25;i++)
	{
		printf("%c\t",*ptr);
		ptr++;
	}
	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : 4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x;
	printf("enter char\n"); /* prints !!!Hello World!!! */
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);

	printf("ASCII value of %c is %d",x,x);

	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : 5.c
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
	printf("enter a character"); /* prints !!!Hello World!!! */
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);
	if((x>='a'&&x<='z')||(x>='A'&&x<='Z'))
		printf("%c is alphabet",x);
	else printf("%c is not alphabet",x);
	return EXIT_SUCCESS;
}

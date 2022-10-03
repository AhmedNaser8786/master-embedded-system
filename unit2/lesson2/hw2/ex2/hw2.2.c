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
	char x=0;
	printf("enter an alphabet\n"); /* prints !!!Hello World!!! */
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);
	if(x=='a'||x=='o'||x=='e')
		printf("%c is vowel\n",x);
	else
		printf("%c is consonant\n",x);
	return EXIT_SUCCESS;
}

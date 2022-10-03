/*
 ============================================================================
 Name        : 6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a=0,b=0;
	printf("enter value of a\n"); /* prints !!!Hello World!!! */
	fflush(stdin);fflush(stdout);
	scanf("%d",&a);
	printf("enter value of b\n"); /* prints !!!Hello World!!! */
		fflush(stdin);fflush(stdout);
		scanf("%d",&b);
		a=a+b;
		b=a-b;
		a=a-b;
		printf("value of a %d",a);
		printf("\n");
		printf("value of b %d",b);

	return EXIT_SUCCESS;
}

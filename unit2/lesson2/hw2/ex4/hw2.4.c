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
	float x=0;
	printf("enter number to check"); /* prints !!!Hello World!!! */
	fflush(stdin);fflush(stdout);
	scanf("%f",&x);
	if(x>0)
		printf("%f is positive",x);
	if(x<0)
		printf("%f is negative",x);
	if(x==0)
		printf("%f is zero",x);
	return EXIT_SUCCESS;
}

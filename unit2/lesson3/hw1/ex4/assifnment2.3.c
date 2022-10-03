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

int main() {
	float x=0.0,y=0.0;
	printf("enter two numbers\n");
	fflush(stdin);fflush(stdout);
	scanf("%f ",&x);
	scanf("%f",&y);
	printf("product %f",x*y);
	return EXIT_SUCCESS;
}

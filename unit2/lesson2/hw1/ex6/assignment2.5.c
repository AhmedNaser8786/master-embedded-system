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
	int x=0,y=0,t=0;
	printf("Enter value of x\n"); /* prints !!!Hello World!!! */
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("Enter value of y\n"); /* prints !!!Hello World!!! */
		fflush(stdin);fflush(stdout);
		scanf("%d",&y);
		t=x;
		x=y;
		y=t;
		printf("value of x %d",x);
printf("\n");
		printf("value of y%d",y);


	return EXIT_SUCCESS;
}

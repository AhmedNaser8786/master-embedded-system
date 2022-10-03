/*
 ============================================================================
 Name        : 1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x=0;
	printf("enter inger number to check\n"); /* prints !!!Hello World!!! */
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	if(x%2==0)
		printf("the number is even\n");
	else if (x%2!=0)
		printf("the number is odd\n");

	return EXIT_SUCCESS;
}

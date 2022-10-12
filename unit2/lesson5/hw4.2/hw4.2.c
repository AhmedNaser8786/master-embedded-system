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
int fact(int n);
int main(void) {
	int x;
	printf("enter an positive intiger\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("factorial of %d=%d",x,fact(x));

	return EXIT_SUCCESS;
}
int fact(int n)
{
	if(n!=1)
		return n*fact(n-1);
}

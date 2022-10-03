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
	int x=0,y=0;
	puts("enter two. numbers");
	fflush(stdin); fflush(stdout);
	scanf("%d  ",&x);
	scanf("%d  ",&y);
	printf("the sum is =%d",x+y);
	return 0;
}

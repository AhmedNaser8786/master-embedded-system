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
void reverse ();
int main(void) {
	printf("enter sentence\n");
	fflush(stdin);fflush(stdout);
	reverse();

	return EXIT_SUCCESS;
}
void reverse ()
{
	char x;
	scanf("%c",&x);
	if(x!='\n')
	{
		reverse();
		printf("%c",x);
	}
}

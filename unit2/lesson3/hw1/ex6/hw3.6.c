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
	char x[1000],y;
	int counter=0,i,s;
	printf("enter stirin :");
	fflush(stdin);fflush(stdout);
	gets(x);
	s=strlen(x);
	printf("enter char to find frequency\t:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&y);
	for(i=0;i<=s;i++)
	{
		if(y==x[i])
		{
		counter++;
		}
	}

	printf("frequency of %c is:%d",y,counter);

	return EXIT_SUCCESS;
}

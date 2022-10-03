/*
 ============================================================================
 Name        : 8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x[100],t;
			int s=0,i=0;
			printf("enter stirig :");
			fflush(stdin);fflush(stdout);
			gets(x);
			s=strlen(x)-1;
			while(i<s)
			{
				t=x[i];
				x[i]=x[s];
				x[s]=t;
				s--;
				i++;

			}
			printf("reverse string is :%s ",x);


	return EXIT_SUCCESS;
}

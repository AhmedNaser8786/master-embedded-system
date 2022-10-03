/*
 ============================================================================
 Name        : 7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x=0,fact=1;
		a:
		printf("enter positive intger number\n "); /* prints !!!Hello World!!! */
		fflush(stdin);fflush(stdout);
		scanf("%d",&x);
		if(x<=0)
		{
			printf("error!!! factorial of negative numbers doesnt exist\n");
			goto a;
		}
		else
		{
			for(int i=1;i<=x;i++)
			{
				fact*=i;
			}
		}
		printf("the sum =%d",fact);
	return EXIT_SUCCESS;
}

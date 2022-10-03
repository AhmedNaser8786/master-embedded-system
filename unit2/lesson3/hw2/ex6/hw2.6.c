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
	int x=0,sum=0;
	a:
	printf("enter positive intger number\n "); /* prints !!!Hello World!!! */
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	if(x<=0)
	{
		printf("enter positive numbers only\n");
		goto a;
	}
	else
	{
		for(int i=0;i<=x;i++)
		{
			sum+=i;
		}
	}
	printf("the sum =%d",sum);
	return EXIT_SUCCESS;
}

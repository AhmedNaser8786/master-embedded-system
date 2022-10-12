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
void interval(int x,int y);
int main(void) {
	int x=0,y=0;
	printf("enter two numbers\n");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&x,&y);
	interval(x,y);

	return EXIT_SUCCESS;
}
void interval(int x,int y)
{
	for (int i=x;i<=y;i++)
	{
		if(i%2!=0&&i%5!=0)
			printf("%d \n",i);

	}
}

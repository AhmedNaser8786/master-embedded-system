/*
 ============================================================================
 Name        : 4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[15];
	int *ptr=&arr[0];
	int x;
	printf("Input the number of elements to store in the array (max 15) :\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("Input 5 number of elements in the array :\n");
	fflush(stdin);fflush(stdout);
	for(int i=0;i<x;i++)
	{
		printf("element -:%d ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",ptr);
		printf("\n");
		ptr++;
	}
	ptr=&arr[x-1];
	for(int i=x;i>0;i--)
	{
		printf("element-:%d=%d\n",i,*ptr);
		ptr--;
	}

	return EXIT_SUCCESS;
}

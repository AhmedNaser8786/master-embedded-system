/*
 ============================================================================
 Name        : 5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[10],num=0,i=0,x=0,f;
	printf("enter number of elements\n");
		fflush(stdin);fflush(stdout);
		scanf("%d",&num);
		printf("enter elements\n");
		fflush(stdin);fflush(stdout);
		for(i=0;i<num;i++)
		{
		scanf("%d",&arr[i]);
		}
		printf("enter element to be searched\n");
		fflush(stdin);fflush(stdout);
		scanf("%d",&x);
		for(i=0;i<num;i++)
				{
				if (x==arr[i])
				{
					f=i+1;
				break;
				}

				}

		printf("number found at location\t %d",f);
	return EXIT_SUCCESS;
}

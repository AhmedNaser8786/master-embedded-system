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
	float num[100];
	float sum=0.0,avg=0.0;
	int n=0;
	a:
	printf("enter the number of data\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	if(n>100||n<0)
	{
		printf("number must be less than 100\n");
		goto a;
	}



	for(int i=0;i<n;i++)
	{
		printf("%d.enter number \n",i+1);
			fflush(stdin);fflush(stdout);
	scanf("%f",&num[i]);
	}

	for (int i=0;i<n;i++)
	{
		sum+=num[i];
	}
	printf("the the sum is %0.2f \n",sum);
	printf("the average is %0.2f",sum/n);

	return EXIT_SUCCESS;
}

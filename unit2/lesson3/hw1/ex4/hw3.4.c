/*
 ============================================================================
 Name        : 4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
int main() {
	int arr[10],num=0,l=0,i=0,x;
	printf("enter number of elements\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	printf("enter elements\n");
	fflush(stdin);fflush(stdout);
	for(i=0;i<num;i++)
	{
	scanf("%d",&arr[i]);
	}
	printf("entter element to be iseart\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("entter location\n");
		fflush(stdin);fflush(stdout);
		scanf("%d",&l);
		for(i=num;i>=l;i--)
		{
			arr[i]=arr[i-1];
		}
		num++;
		arr[l-1]=x;
		for(i=0;i<num;i++)
		{
			printf("%d \t",arr[i]);
		}
	return (0);
}



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

int main(void) {
	int a[10][10],t[10][10],r,c,i=0,y=0;
	printf("enter rows and column\n");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&r,&c);
	for(int i=0;i<r;i++)
	{
		for (int y=0;y<c;y++)
		{
			printf("enter element a%d %d \t",i+1,y+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&a[i][y]);

		}
	}
	printf("entered matrix\n");
	for( i=0;i<r;i++)
		{
			for ( y=0;y<c;y++)
			{

				printf("%d \t",a[i][y]);
				if (y==c-1)
					printf("\n\n");

			}
		}
	for( i=0;i<r;i++)
			{
				for (y=0;y<c;y++)
				{

					t[y][i]=a[i][y];

				}
			}
	printf("transpose of matrix\n");
		for( i=0;i<c;i++)
			{
				for ( y=0;y<r;y++)
				{

					printf("%d \t",t[i][y]);
					if (i==r-1)
						printf("\n\n");

				}
			}
	return EXIT_SUCCESS;
}

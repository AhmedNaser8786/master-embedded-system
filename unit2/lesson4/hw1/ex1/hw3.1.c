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

int main(void) { int r,c;
int a[2][2];
int b[2][2];
int s[2][2];
printf("enter elements of 1st matrix\n");
fflush(stdin);fflush(stdout);
for ( r=0;r<2;++r)
{
	for( c=0;c<2;++c)
	{
		printf("enter a %d %d ",r+1 ,c+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",&a[r][c]);

	}
}
for (int r=0;r<2;++r)
{
	for(int c=0;c<2;++c)
	{
		printf("enter b %d %d",r+1,c+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",&b[r][c]);

	}
}
for ( r=0;r<2;r++)
{
	for ( c=0;c<2;c++)
	{
		s[r][c]=a[r][c]+b[r][c];

	}
}

for (int r=0;r<2;++r)
{
	for(int c=0;c<2;++c)
	{
		printf(" %d \t",s[r][c]);
		if (c==1) printf("\n");
	}

}

return EXIT_SUCCESS;
}

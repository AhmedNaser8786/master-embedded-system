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
struct distance
{
	int feet;
	float inche;
}d1,d2,sum;
int main(void) {
	printf("enter info for 1st distance\n");
	printf("enter feet\t:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&d1.feet);
	printf("enter inche\t:");
		fflush(stdin);fflush(stdout);
		scanf("%f",&d1.inche);

		printf("enter info for sec distance\n");
			printf("enter feet\t:");
			fflush(stdin);fflush(stdout);
			scanf("%d",&d2.feet);
			printf("enter inche\t:");
				fflush(stdin);fflush(stdout);
				scanf("%f",&d2.inche);

				sum.feet=d1.feet+d2.feet;
				sum.inche=d1.inche+d2.inche;
				if(sum.inche>12.0)
				{
					sum.inche-=12.0;
					++sum.feet;
				}
				printf("\n sum of distance:%d\' - %0.2f\"",sum.feet,sum.inche);


	return EXIT_SUCCESS;
}

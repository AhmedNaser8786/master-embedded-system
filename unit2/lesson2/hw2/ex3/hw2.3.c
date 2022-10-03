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
	float x=0,y=0,z=0;
	printf("enter three numers"); /* prints !!!Hello World!!! */
	fflush(stdin);fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);

	if(x>y&&x>z)
	{
		printf("largest numer = %f",x);
	}
	 if(y>x&&y>z)
	{
		printf("largest unmber = %f",y);
	}

	if(z>y&&z>x)
		printf("largest number = %f",z);


	return EXIT_SUCCESS;
}

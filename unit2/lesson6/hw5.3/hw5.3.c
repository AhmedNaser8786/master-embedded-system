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
struct complex
{
	float real;
	float imag;
};
struct complex add(struct complex x1,struct complex x2);
int main(void) {
	struct complex x1,x2,sum;
	printf("for 1st complex number\n");
	printf("enter real and imaginary\t:");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&x1.real,&x1.imag);

	printf("for sec complex number\n");
		printf("enter real and imaginary\t:");
		fflush(stdin);fflush(stdout);
		scanf("%f %f",&x2.real,&x2.imag);
		sum=add(x1,x2);
		printf("\nsum=%0.2f + %0.2fi",sum.real,sum.imag);

	return EXIT_SUCCESS;
}
struct complex add(struct complex x1,struct complex x2)
{
struct complex t;
t.real=x1.real+x2.real;
t.imag=x1.imag+x2.imag;
return t;
}

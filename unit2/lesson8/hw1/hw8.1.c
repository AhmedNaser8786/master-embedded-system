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

int main(void) {
	int m=29;
	int *ptr =&m;

	printf("address of m:%p \n",&m);
	printf("value of m:%d \n",m);
	printf("Now ab is assigned with the address of m.\n");
	printf("adress of pointer ab=%p\n",ptr);
	printf("content pf ab=%d\n",*ptr);
	m=34;
	printf("The value of m assigned to 34 now.\n");
	printf("adress of pointer ab=%x\n",ptr);
	printf("content pf ab=%d\n",*ptr);
	*ptr=7;
    printf("The value of ab assigned to 7 now.\n");
    printf("adress of pointer ab=%x\n",ptr);
    	printf("content pf ab=%d\n",*ptr);


	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : 8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {char x;float num1=0,num2=0;
printf("enter operator\n"); /* prints !!!Hello World!!! */
fflush(stdin);fflush(stdout);
scanf("%c",&x);
printf("enter two numbers\n"); /* prints !!!Hello World!!! */
fflush(stdin);fflush(stdout);
scanf("%f %f",&num1,&num2);
switch(x)
{
case '*':
	printf("%f * %f=%f",num1,num2,num1*num2);
	break;
case '-':
	printf("%f - %f=%f",num1,num2,num1-num2);
	break;
case '+':
	printf("%f + %f=%f",num1,num2,num1+num2);
	break;
case '/':
	printf("%f / %f=%f",num1,num2,num1/num2);
	break;
default:
	printf("operator is not correct\n");
	break;


}


return EXIT_SUCCESS;
}

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
struct student
{
	char name[20];
	int roll;
	float marks;
};
int main(void) {
	struct student s1;
	printf("enter information of student\n");
	printf("enter name:\t");
	fflush(stdin);fflush(stdout);
	scanf("%s",&s1.name);
	printf("enter roll number:\t");
		fflush(stdin);fflush(stdout);
		scanf("%d",&s1.roll);
		printf("enter marks:\t");
			fflush(stdin);fflush(stdout);
			scanf("%f",&s1.marks);
			printf("displaying info\n");
			printf("name:%s\n",s1.name);
			printf("roll number:%d\n",s1.roll);
			printf("name:%0.2f",s1.marks);


	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : 4.c
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
	char name[10];
	int roll;
	float marks;
};
int main(void) {
	struct student s1[10];
	for(int i=0;i<10;i++)
	{
	printf("enter information of studentnumber %d\n",i);
	printf("enter name of student number %d:\t",i);
	fflush(stdin);fflush(stdout);
	scanf("%s",&s1[i].name);
	printf("enter roll number for student number %d:\t",i);
		fflush(stdin);fflush(stdout);
		scanf("%d",&s1[i].roll);
		printf("enter marks:\t");
			fflush(stdin);fflush(stdout);
			scanf("%f",&s1[i].marks);
	}
			printf("displaying info\n");
			for(int i=0;i<10;i++)
			{
			printf("name:%s\n",s1[i].name);
			printf("roll number:%d\n",s1[i].roll);
			printf("name:%0.2f",s1[i].marks);
			}


	return EXIT_SUCCESS;
}

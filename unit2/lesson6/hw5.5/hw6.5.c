#include "stdio.h"
#define area(r) r*(3.14)*r
int main()
{ float x=0;
	printf("enter radius\n");
	scanf("%f",&x);
	printf("area=%0.2f \n",area(x));
	return 0;
}
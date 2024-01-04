#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double a;
	double b;
	double result;
	scanf("%d %d", &a, &b);
	//printf("%d", a+b);
	//printf("%d", a - b);
	//printf("%d", a * b);
	result = a / b;
	printf("%.9f", result);
}
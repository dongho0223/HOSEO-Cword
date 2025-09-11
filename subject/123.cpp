#include<stdio.h>

void main()
{
	int i = 10;
	int* p;
	p = &i;
	*p = 20;
	printf("%d", i);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x;
	scanf("%d", &x);
	if (x % 2 == 1)
	{
		printf("odd");

	}
	if (x % 2 == 0)
	{
		printf("even");

	}
	return 0;
}
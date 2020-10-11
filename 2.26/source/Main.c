#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int multiple(int x, int y)
{
	return x % y == 0;
}
int main()
{
	int n1, n2;

	printf("Input the first integer : ");
	scanf("%d", &n1);
	printf("Input the second integer: ");
	scanf("%d", &n2);

	if (multiple(n1, n2))
		printf("\n%d is a multiple of %d.\n", n1, n2);
	else
		printf("\n%d is not a multiple of %d.\n", n1, n2);

	return 0;
}
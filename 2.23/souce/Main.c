
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	
	int x,y,z,s;
	scanf("%d %d %d" , &x , &y , &z );
	
	if (x > y&&y > z)
	{
		printf("largest = %d smallest = %d\n", x,z);
	}
	if (y > z&&z > x)
	{
		printf("largest = %d smallest = %d\n", y, x);
	}
	if (z >x&&x > y)
	{
		printf("largest = %d smallest = %d\n", z, y);
	}
	if (x >z&&z > y)
	{
		printf("largest = %d smallest = %d\n", x, y);
	}
	if (y > x&&x > z)
	{
		printf("largest = %d smallest = %d\n", y, z);
	}
	if (z > y&&y > x)
	{
		printf("largest = %d smallest = %d\n", z, x);
	}
	
	
	
	



	return 0;
	

}
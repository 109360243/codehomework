#include <stdio.h>
int main()
{
	int i,sum1,sum2;
	printf("number squre cube\n");
	for (i = 0; i < 11; i++)
	{
		sum1 = i * i;
		sum2 = i * i * i;


		printf("%d      %d     %d\n", i,sum1,sum2);
		
    }
	return 0;
}
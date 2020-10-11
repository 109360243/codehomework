#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float h;
	float w;
	float bmi;
	printf("輸入身高(公尺)，體重(公斤)\n");
	
	scanf("%f  %f" ,&h, &w);
	bmi = w/(h*h);
	printf("%f\n", bmi);

	if (bmi < 18.5)
	{
		printf("underweight\n");

	}
	if(18.5 <= bmi&&bmi <= 24.9)
	{
		printf("normal\n");
	}
	if (25 <= bmi && bmi <= 29.9)
	{
		printf("overweight\n");
	}
	if (bmi>=30)
	{
		printf("obese\n");
	}

	return 0;

}
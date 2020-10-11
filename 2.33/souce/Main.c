#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float km, oilm, oilkm, park, pass, sum;
	printf("請依序輸入一整天的總里程數,汽油一公升 / 加侖多少錢 ,平均一公升 / 加侖能行駛多少公里 ,一天的停車費 ,一天的通行費(過路費)");

	scanf("%f %f %f %f %f", &km, &oilm, &oilkm, &park, &pass);
	sum = (oilm*(km / oilkm / 11)+pass +park);
	printf("車費為%f\n", sum);
	return 0;

}
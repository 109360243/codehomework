#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float km, oilm, oilkm, park, pass, sum;
	printf("�Ш̧ǿ�J�@��Ѫ��`���{��,�T�o�@���� / �[�ڦh�ֿ� ,�����@���� / �[�گ��p�h�֤��� ,�@�Ѫ������O ,�@�Ѫ��q��O(�L���O)");

	scanf("%f %f %f %f %f", &km, &oilm, &oilkm, &park, &pass);
	sum = (oilm*(km / oilkm / 11)+pass +park);
	printf("���O��%f\n", sum);
	return 0;

}
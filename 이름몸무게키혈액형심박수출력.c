#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main()
{
	char a[16], d;
	double b, c;
	int e;
	printf("당신의 이름, 몸무게, 키, 혈액형, 심박수를 입력해 주세요 : ");
	scanf("%s %lf %lf %c %d", a, &b, &c, &d, &e);
	printf("이름 : %s\n 몸무게 : %.1fkg\n 키 : %.1fcm\n 혈액형 : %c\n 심박수 : %d\n", a, b, c, d, e);
}
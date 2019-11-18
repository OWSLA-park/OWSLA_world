#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a, b, c;
	int Average;
	printf("A과목의 점수 : ");
	scanf("%d", &a);
	printf("b과목의 점수 : ");
	scanf("%d", &b);
	printf("C과목의 점수 : ");
	scanf("%d", &c);
	Average = (a + b + c) / 3;
	printf("평균점수는 %d 점 입니다.\n", Average);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main()
{
	char a[16];
	char b[16];
	printf("첫번째 문자열 : ");
	fgets(a, 16, stdin);
	printf("두번째 문자열 : ");
	fgets(b, 16, stdin);

	int length;
	length = strlen(a);
	if (length > 0) a[length - 1] = 0;
	strcat(a, b);
	printf("합치면 : %s", a);
}
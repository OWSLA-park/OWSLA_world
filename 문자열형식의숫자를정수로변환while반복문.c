#include <stdio.h>
int ArrayToInteger(char string[])
{
	int num = 0, count = 0;
	while (string[count] != 0) { /*문자열 자리에 0(NULL) 이 나올 때까지 반복*/
		num = num * 10 + (string[count] - '0'); /*num값은 1 -> 12 -> 123 으로 증가*/
		count++; /*다음 문자로 이동*/
	}
	return num;
}

void main()
{
	int first_num, second_num;
	char first_string[16], second_string[16];

	printf("input first number : ");
	gets(first_string);
	printf("input second number : ");
	gets(second_string);

	first_num = ArrayToInteger(first_string);
	second_num = ArrayToInteger(second_string);
	printf(" %d + %d = %d\n", first_num, second_num, first_num + second_num);
}
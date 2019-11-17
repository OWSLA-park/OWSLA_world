#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int num = 0;
	while (1) {
		printf("input age : ");
		if (scanf("%d", &num) == 0) { /*scanf함수는 실행 실패시 0을 반환*/
			rewind(stdin);
			printf("숫자를 입력해주세요!\n");
		}
		else {
			if (num > 0 && num <= 150) {
				break;
			}
			else {
				printf("올바른 나이를 입력해주세요!\n");
			}
		}
	}
		printf("당신의 나이는 %d살 입니다.\n", num);
	}
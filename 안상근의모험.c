#include <stdio.h>

int main()
{
	printf("********** 21세기용사 안상근의 모험 **********\n");
	printf("1. 게임시작\n");
	printf("2. 게임종료\n");
	int a;
	scanf("%d", &a);
	if (a = 2) {
		printf("5252... 다시 생각해보라구...\n");
		printf("1. 게임시작\n");
		printf("2. 게임종료\n");
	}
	else {
		printf("1. 게임 설명 듣기\n");
		printf("2. 바로 시작하기\n");
	}
	int b;
	scanf("%d", &b);
	if (b = 1) {
		printf("이 게임은 텍스트 기반 MUD 게임으로\n");
		printf("플레이어는 선택지 중 하나를 골라 게임을 진행합니다\n");
		printf("플레이어가 선택한 행동에 따라 게임 진행 방향이 달라집니다\n");
		printf("정해진 정답은 없으니 자유롭게 선택하여 진행해주세요\n");
	}
}
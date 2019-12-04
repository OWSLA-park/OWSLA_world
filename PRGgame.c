#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main()
{
	int select = 0;
	int select1 = 0;
	int select2 = 0;
	int select3 = 0;
	printf("┌──────────────────────────────┐\n");
	printf("│                                                            │\n");
	printf("│       안상근Story - 부제 : 22세기 미래인간 안상근          │\n");
	printf("│                                                            │\n");
	printf("│                       created by 안상근 담당일찐 19/12/04 ~│\n");
	printf("└──────────────────────────────┘\n");
	_sleep(500);
	printf("1. 게임을 시작한다 \n");
	_sleep(500);
	printf("2. 게임을 종료한다 \n");

	scanf("%d", &select);

	if (select == 2) {
		printf("도망가는건가? 한심하군....");
		return 0;
	}
	else {
		system("cls");
		printf("로딩중.");
		_sleep(500);
		system("cls");
		printf("로딩중..");
		_sleep(500);
		system("cls");
		printf("로딩중...");
		_sleep(500);
		system("cls");
		printf("로딩중....");
		_sleep(500);
		system("cls");




		while (1)
		{
			printf("┌───────────────────────┐\n");
			printf("│           스폰지점  -  한승아파트            │\n");
			printf("└───────────────────────┘\n");
			_sleep(1000);
			printf("무엇을 할까?\n");
			_sleep(500);
			printf("\n");
			printf("1. 장비창\n");
			printf("2. 캐릭터 정보\n");
			printf("3. 건물 밖으로 나가기\n");
			printf("4. 저장하고 종료하기\n");

			char weapon[20] = "몽둥이", armor[20] = "앞치마", shoes[20] = "가죽 샌들", riding[20] = "없음";
			int attdm = 0, def = 0, speed = 0, hp = 0, mp = 0;

			scanf("%d", &select1);

			if (select1 == 4) {
				system("cls");
				printf("저장중입니다.");
				_sleep(500);
				system("cls");
				printf("저장중입니다..");
				_sleep(500);
				system("cls");
				printf("저장중입니다...");
				_sleep(500);
				system("cls");
				printf("저장중입니다....");
				_sleep(500);
				system("cls");
				printf("저장완료!");
				_sleep(500);
				printf("게임을 종료합니다.");
				return 0;
			}
			else {
				if (select1 == 1) {
					system("cls");
					printf("┌────────────┐\n");
					printf("         캐릭터 장비        \n");
					printf("                            \n");
					printf("   무기 : %s                \n", weapon);
					printf("                            \n");
					printf("   갑옷 : %s                \n", armor);
					printf("                            \n");
					printf("   신발 : %s                \n", shoes);
					printf("                            \n");
					printf(" 라이딩 : %s                \n", riding);
					printf("                            \n");
					printf("└────────────┘\n");
					int a;
					printf("1. 돌아가기\n");
					scanf("%d", &a);
					system("cls");
				}
				else {
					if (select1 == 2) {
						system("cls");
						printf("┌────────────┐\n");
						printf("         캐릭터 정보        \n");
						printf("                            \n");
						printf(" 공격력 : %d                \n", attdm);
						printf("                            \n");
						printf(" 방어력 : %d                \n", def);
						printf("                            \n");
						printf(" 속도   : %d                \n", speed);
						printf("                            \n");
						printf(" 체력   : %d                \n", hp);
						printf("                            \n");
						printf(" 마나   : %d                \n", mp);
						printf("                            \n");
						printf("└────────────┘\n");
						int a;
						printf("1. 돌아가기\n");
						scanf("%d", &a);
						system("cls");
					}
					else {
						if (select1 == 3) {
							system("cls");
							printf("건물 밖은 수많은 몬스터들이 있습니다.\n\n");
							_sleep(1000);
							printf("나가시겠습니까?.\n");
							_sleep(1000);
							printf("==============================\n");
							int a = 0;
							printf("1. 용기내서 나가본다.\n");
							printf("\n");
							printf("2. 조금 더 준비 해볼까..?.\n");
							scanf("%d", &a);
							system("cls");
							if (a == 1) {
								break;
							}
						}
					}
					
				}
			}
		}
		system("cls");
		_sleep(500);
		printf("철컥! 끼익...\n\n");
		_sleep(1000);
		printf("용기를 내서 건물 밖으로 나왔다.\n\n");
		_sleep(1000);
		printf("")
		printf("앞에 큰 도로가 보인다.\n\n");
		_sleep(1000);
		printf("==============================\n");
		printf("1. 일단 도로를 따라간다.\n");
		printf("2. 주변을 살펴본다.\n");
		scanf("%d", &select2);
		if (select2 == 2) {

		}
	}
}
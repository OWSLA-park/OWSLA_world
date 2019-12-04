#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)

int save; //저장
int load; //불러오기
int attdm; //공격력 (0 = 1~2) (1 = 3~5) (2 = 6~9) (3 =10~15) (4 = 15~17) (5 = 18~23) (6 = ??~??)
int	def; //방어력 (0 = 0) (1 = 2) (2 = 6) (3 = 10) (4 = 15) (5 = 19) (6 = ??)
int	hp; //체력
int	mp; //마나
int xp; //경험치
int level = 1; //레벨
int weapon; //무기 (0 = 맨손) (1 = 커튼봉) (2 = 쇠파이프) (3 = 골프채) (4 = 녹슨 진검) (5 = 날카로운 진검) (6 = 딜도)
int armor; //방어구 (0 = 앞치마) (1 = 동물 잠옷) (2 = 청바지 청자켓) (3 = 롱패딩) (4 = 두꺼운 검도복) (5 = 신형 전투복) (6 = 전신 타이즈)
int riding; //탈것 (0 = 없음) (1 = 인라인스케이트) (2 = 킥보드) (3 = 악센트) (3 = K3) (4 = 두돈반)
int mobhp; //몬스터체력
int mobattdm; //몬스터공격력
int select;
int select1;
int select2;
int select3;

int secter1() //1층 스폰
{
	while (1)
	{
		static int a;
		system("cls");
		printf("              ┌───────────────────────┐\n");
		printf("              │           스폰지점  -  한승아파트 1층        │\n");
		printf("              └───────────────────────┘\n");
		_sleep(1000);
		printf(" 무엇을 할까?\n");
		_sleep(500);
		printf("\n");
		printf(" 1. 장비창\n");
		printf(" 2. 캐릭터 정보\n");
		printf(" 3. 2층으로 올라가기\n");
		printf(" 4. 저장하고 종료하기(미구현)\n");

		scanf("%d", &select1);
		if (select1 == 1) {
			chequip(1);//캐릭터 장비
		}
		else {
			if (select1 == 2) {
				chstatus(1);//캐릭터 정보 
			}
			else {
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
					if (select1 == 3) {
						system("cls");
						printf("뒤쪽에 반쯤 부서진 아파트 계단이 보인다.\n\n");
						_sleep(1000);
						printf("계단 윗쪽에서 알수없는 인기척이 느껴진다.\n\n");
						_sleep(1000);
						printf("올라가시겠습니까?.\n");
						_sleep(1000);
						printf("==============================\n");
						int a = 0;
						printf("1. 두렵지만 일단 올라간다.\n");
						printf("\n");
						printf("2. 조금 더 준비 해볼까..?.\n");
						scanf("%d", &a);
						system("cls");
						if (a > 1) {
							secter1();
						}
						else {
							system("cls");
							_sleep(500);
							printf("터벅.");
							_sleep(500);
							system("cls");
							printf("터벅..");
							_sleep(500);
							system("cls");
							printf("터벅...");
							_sleep(500);
							system("cls");
							printf("터벅...  터벅");
							_sleep(500);
							system("cls");
							printf("터벅...  터벅.");
							_sleep(500);
							system("cls");
							printf("터벅...  터벅..");
							_sleep(500);
							system("cls");
							printf("터벅...  터벅...\n\n");
							_sleep(1000);
							printf("한칸씩 숨죽이며 천천히 올라간다.\n\n");
							_sleep(1000);
							printf("거의 다왔을 때 쯤\n\n");
							_sleep(1000);
							printf("눈앞에 펼쳐진건\n\n");
							_sleep(1000);
							printf("여기저기 부서지고 시체들이 널브러진 난장판이었다.\n");
							_sleep(1500);
							secter2();
						}
					}
				}
			}
		}
	}
}
int secter2() //2층 안전지대
{
	static int a;
	while (1) {
		system("cls");
		printf("              ┌───────────────────────┐\n");
		printf("              │       안전지역  -  한승아파트 2층 중앙       │\n");
		printf("              └───────────────────────┘\n");
		_sleep(1000);
		printf(" 무엇을 할까?\n");
		_sleep(500);
		printf("\n");
		printf(" 1. 장비창\n");
		printf(" 2. 캐릭터 정보\n");
		printf(" 3. 201호로 들어가기\n");
		printf(" 4. 202호로 들어가기\n");
		printf(" 5. 윗층으로 올라가기\n");
		printf(" 6. 아래층으로 내려가기\n");

		scanf("%d", &select2);
		if (select2 == 1) {
			chequip(2);//캐릭터 장비
		}
		else {
			if (select2 == 2) {
				chstatus(2);//캐릭터 정보 
			}
			else {
				if (select2 == 3) {
					system("cls");
					printf("안에서 수상한 인기척이 느껴집니다\n\n");
					_sleep(1000);
					printf("들어가시겠습니까?\n");
					_sleep(1000);
					printf("==============================\n");
					printf(" 1. 들어간다\n");
					printf(" 2. 다시 돌아간다\n");
					int a;
					scanf("%d", &a);
					if (a == 2) { secter2(); 
					}
					else {
						system("cls");
						printf(".");
						_sleep(500);
						printf(".");
						_sleep(500);
						printf(".");
						_sleep(500);
						printf(".");
						_sleep(500);
						printf("철컥!   ");
						_sleep(1000);
						printf("끼");
						_sleep(500);
						printf("이");
						_sleep(500);
						printf("익");
						_sleep(500);
						printf(".");
						_sleep(500);
						printf(".");
						_sleep(500);
						printf(".");
						_sleep(500);
					}
				}
			}
		}


	}
}

int chstatus(int a)//캐릭터정보
{
	static int choose;
	if (a > 0) {
		system("cls");
		printf("              ┌────────────┐\n");
		printf("                       캐릭터 정보        \n");
		printf("                                          \n");
		printf("               레벨 : %d                  \n", level);
		printf("                                          \n");
		if (weapon == 0) { printf("               공격력 : 2                \n"); }
		//printf("               공격력 : %d                \n");
		printf("                                          \n");
		if (armor == 0) { printf("               방어력 : 0                \n"); }
		//printf("               방어력 : %d                \n");
		printf("                                          \n");
		if (hp == 0) { printf("               체력   : 15                \n"); }
		//printf("               체력   : %d                \n");
		printf("                                          \n");
		if (mp == 0) { printf("               마나   : 10                \n"); }
		//printf("               마나   : %d                \n");;
		printf("                                          \n");
		printf("               경험치 : %d                \n", xp);
		printf("                                          \n");
		printf("              └────────────┘\n");
		printf("\n 1. 돌아가기\n");
		scanf("%d", &choose);
		system("cls");
		if (a == 1) {
			secter1();
		}
		else {
			if (a == 2) {
				secter2();
			}
		}
	}
	return 0;
}

int chequip(int a)
{
	static int choose;
	if (a > 0) {
		system("cls");
		printf("              ┌────────────┐\n");
		printf("                       캐릭터 장비        \n");
		printf("                                          \n");
		if (weapon == 0) { printf("                 무기 : 맨손              \n"); }
		//printf("                 무기 : 맨손              \n");
		printf("                                          \n");
		if (armor == 0) { printf("               방어구 : 앞치마            \n"); }
		//printf("               방어구 : 앞치마            \n");
		printf("                                          \n");
		if (riding == 0) { printf("               라이딩 : 없음              \n"); }
		//printf("               라이딩 : 없음              \n");
		printf("                                          \n");
		printf("              └────────────┘\n");
		printf("\n1. 돌아가기\n");
		scanf("%d", &choose);
		if (a == 1) {
			secter1();
		}
		else {
			if (a == 2) {
				secter2();
			}
		}
	}
	return 0;
}


int main()
{
	//오프닝
	printf("┌──────────────────────────────┐\n");
	printf("│                                                            │\n");
	printf("│           상의 탑 - 부제 : 22세기 미래인간 안상근          │\n");
	printf("│                        (장르 : 포스트 아포칼립스)          │\n");
	printf("│                                                            │\n");
	printf("│                       created by 안상근 담당일찐 19/12/04 ~│\n");
	printf("└──────────────────────────────┘\n");
	_sleep(500);
	printf("1. 게임을 시작한다 \n");
	_sleep(500);
	printf("2. 게임을 종료한다 \n");

	scanf("%d", &select);

	if (select == 2) {
		system("cls");
		printf("                                      뭐야\n\n");
		_sleep(1000);
		printf("                                    겁쟁이야?\n\n");
		_sleep(1000);
		printf("                                    어우 한심~\n\n");
		_sleep(1000);
		return 0;
	}
	else {

		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n                                 ■□□□□□");
		_sleep(500);
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n                                 ■■□□□□");
		_sleep(500);
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n                                 ■■■□□□");
		_sleep(500);
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n                                 ■■■■□□");
		_sleep(500);
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n                                 ■■■■■□");
		_sleep(1000);
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n                                 ■■■■■■");
		_sleep(1000);
		system("cls");

		_sleep(2000);
		printf("\n\n\n\n\n\n\n\n\n\n                   2");
		_sleep(300);
		printf("2");
		_sleep(300);
		printf("세");
		_sleep(300);
		printf("기 ");
		_sleep(300);
		printf("미");
		_sleep(300);
		printf("래");
		_sleep(300);
		printf("인");
		_sleep(300);
		printf("간 ");
		_sleep(300);
		printf("안");
		_sleep(300);
		printf("상");
		_sleep(300);
		printf("근");
		_sleep(300);
		printf("의 ");
		_sleep(300);
		printf("지");
		_sleep(300);
		printf("구");
		_sleep(300);
		printf("종");
		_sleep(300);
		printf("말 ");
		_sleep(300);
		printf("생");
		_sleep(300);
		printf("존");
		_sleep(300);
		printf("기");
		_sleep(300);
		printf("!");
		_sleep(300);
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n                   22세기 미래인간 안상근의 지구종말 생존기!");
		_sleep(500);
		system("cls");
		printf(" ");
		_sleep(500);
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n                   22세기 미래인간 안상근의 지구종말 생존기!");
		_sleep(500);
		system("cls");
		printf(" ");
		_sleep(500);
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n                   22세기 미래인간 안상근의 지구종말 생존기!");
		_sleep(500);
		system("cls");
		printf(" ");
		_sleep(500);
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n                   22세기 미래인간 안상근의 지구종말 생존기!\n\n");
		_sleep(1500);
		printf("\n\n\n\n\n\n                                   시작합니다!");
		_sleep(1000);
		secter1();

		}
	}


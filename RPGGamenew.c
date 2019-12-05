#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#pragma warning(disable:4996)

int level = 1; //레벨
int save; //저장
int load; //불러오기
int attdm; //공격력 (0 = 2) (1 = 5) (2 = 9) (3 = 13) (4 = 17) (5 = 22) (6 = ??~??)
int	def; //방어력 (0 = 0) (1 = 2) (2 = 6) (3 = 10) (4 = 15) (5 = 19) (6 = ??)
int dex; //민첩
int	hp; //체력
int	mp; //마나
int xp; //경험치
int weapon; //무기 (0 = 맨손) (1 = 커튼봉) (2 = 쇠파이프) (3 = 골프채) (4 = 녹슨 진검) (5 = 날카로운 진검) (6 = 딜도)
int armor; //방어구 (0 = 앞치마) (1 = 동물 잠옷) (2 = 청바지 청자켓) (3 = 롱패딩) (4 = 두꺼운 검도복) (5 = 신형 전투복) (6 = 전신 타이즈)
int riding; //탈것 (0 = 없음) (1 = 인라인스케이트) (2 = 킥보드) (3 = 악센트) (3 = K3) (4 = 두돈반)
int mobhp; //몬스터체력
int mobattdm; //몬스터공격력
int select0;
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
					return 0;//게임종료
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
							secter1();// 돌아가기
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
							secter2(); //2층으로
						}
					}
				}
			}
		}
	}
}
int secter2() //2층 안전지대
{
	static int a, b, c, d, e;
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
				if (select2 == 3)
					if (level > 1){ printf("이미 진행한 구역입니다."); secter2();
				}
					else {
						system("cls");
						printf("문 안쪽에서 고약한 악취가 납니다.\n\n");
						_sleep(1000);
						printf("들어가시겠습니까?\n");
						_sleep(1000);
						printf("==============================\n");
						printf(" 1. 들어간다\n");
						printf(" 2. 다시 돌아간다\n");
						int a;
						scanf("%d", &a);
					}
					if (a == 2) { secter2(); //다시 돌아가기
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
						_sleep(300);
						printf("이");
						_sleep(300);
						printf("익");
						_sleep(300);
						printf(".");
						_sleep(300);
						printf(".");
						_sleep(300);
						printf(".");
						_sleep(300);
						printf(".\n\n");
						_sleep(1000);
						printf("문을 열자마자 밀려오는 악취와\n\n");
						_sleep(1000);
						printf("눈앞에 널브러진 시체 때문에\n\n");
						_sleep(1000);
						printf("내 표정은 저절로 일그러졌다.\n\n");
						_sleep(1000);
						printf("그것과 동시에 집 안쪽에서부터 느껴지는 알수없는 인기척.");
						_sleep(500);
						printf(".");
						_sleep(500);
						printf(".");
						_sleep(1000);
						printf("\n\n");
						printf("일단 내 몸을 지킬 무기를 찾아야한다\n");
						_sleep(1000);
						printf("===================================================\n");
						printf("1. 거실로 진입한다.\n");
						printf("2. 다시 밖으로 나간다.\n");
						scanf("%d", &b);
						if (b == 2) {
							secter2();//돌아가기
						}
						if (b == 1) {
							system("cls");
							printf("살금");
							_sleep(500);
							printf(".");
							_sleep(500);
							printf(".");
							_sleep(500);
							printf(".");
							_sleep(500);
							printf(".   ");
							_sleep(500);
							printf("살금");
							_sleep(500);
							printf(".");
							_sleep(500);
							printf(".");
							_sleep(500);
							printf(".");
							_sleep(500);
							printf(".\n\n");
							_sleep(1000);
							printf("소리를 죽이고 조심스럽게 거실로 진입했다.\n\n");
							_sleep(1500);
							printf("거실 한구석에 커튼봉이 떨어져있다.\n\n");
							_sleep(1500);
							printf("튼튼하지는 않지만 없는것 보다는 나을것같다.\n\n");
							_sleep(1500);
							printf("1. [커튼봉] 을 장비한다.\n\n");
							printf("2. 필요없다! 남자는 맨손격투지!.\n\n");
							scanf("%d", &c);
							if (c == 1) {
								system("cls");
								weapon = 1;
								printf(" [커튼봉] 을 장착했다!\n\n");
								_sleep(1000);
								printf(" 공격력이 증가했다!   공격력 3 -> 5");
								_sleep(2000);
								system("cls");
								printf("거실을 둘러보던 도중에\n\n");
								_sleep(1000);
								printf("안방에서 발소리가 들렸다\n\n");
								_sleep(1000);
								printf("\"또다른 생존자가 있는걸까...?\"\n\n");
								_sleep(1000);
								printf("\"확인하려면 가봐야겠지...\"\n\n");
								_sleep(1000);
								printf("===================================\n");
								printf("1. 안방으로 들어가본다\n");
								printf("2. 무서우니 거실 구석에 웅크린다\n");
								scanf("%d", &d);
								if (d == 2) {
									system("cls");
									printf("당신은 구석으로 걸어가던 도중\n\n");
									_sleep(1000);
									printf("전선에 발이 걸려서 튀어나온 철근 위로 넘어졌습니다(상근 철근ㅋ)");
									_sleep(1500);
									system("cls");
									printf("\n\n\n\n           y   y   ooo    u     u     ddddd    iiiiiiii   eeeeeee                       \n");
									printf("            y y   o   o   u     u     d    d      ii      e                             \n");
									printf("             y   o     o  u     u     d     d     ii      eeeeeee                       \n");
									printf("             y    o   o    u   u      d    d      ii      e                             \n");
									printf("             y     ooo      uuu       ddddd    iiiiiiii   eeeeeee                       \n");
									_sleep(3000);
									system("cls");
									printf("2층 중앙으로 돌아갑니다....");
									_sleep(1500);
									secter2();
								}
								else {
									system("cls");
									printf("끼");
									_sleep(300);
									printf("이");
									_sleep(300);
									printf("익");
									_sleep(300);
									printf(".");
									_sleep(300);
									printf(".");
									_sleep(300);
									printf(".");
									_sleep(300);
									printf(".\n\n");
									printf("조심스럽게 안방 문을 열었다...\n\n");
									_sleep(1000);
									printf("그 순간!\n\n");
									_sleep(1300);
									printf("나는 입을 틀어막았다..!\n\n");
									_sleep(1300);
									printf("내 앞에 있는건\n\n");
									_sleep(1300);
									printf("설사를 질질 흘리고있는\n\n");
									_sleep(1300);
									printf("심각한 탈수증세로 마치 좀비처럼 이성을 잃은\n\n");
									_sleep(1300);
									printf("인간의 모습을 한 짐승이었다....\n\n");
									_sleep(1300);
									printf("내가 당황하는 사이,   그녀석은 나를 발견하고 점점 다가왔다...!\n\n");
									printf("[1 . 싸운다!]\n");
									printf("[2 . 도망친다..]\n");
									scanf("%d", e);
									if (e == 2) {
										if (dex >= 1) {
											system("cls"); printf("무사히 도망쳤다!");
											secter2();
										}
										else {
											if (dex < 1) {
												system("cls");
												printf("도망칠 수 없다!");
												firstbattle1();
											}
										}
									}
									else {
										firstbattle1();
									}

								}
							}
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
		if (weapon == 0)printf("               공격력 : 2 \n");
		if (weapon == 1)printf("               공격력 : 5 \n");
		if (weapon == 2)printf("               공격력 : 9 \n");
		if (weapon == 3)printf("               공격력 : 13 \n");
		if (weapon == 4)printf("               공격력 : 17 \n");
		if (weapon == 5)printf("               공격력 : 22 \n");
		if (weapon == 6)printf("               공격력 : ?? \n");
		//printf("               공격력 : %d                \n");
		printf("                                          \n");
		if (armor == 0)printf("               방어력 : 0\n");
		if (armor == 1)printf("               방어력 : 2\n");
		if (armor == 2)printf("               방어력 : 6\n");
		if (armor == 3)printf("               방어력 : 10\n");
		if (armor == 4)printf("               방어력 : 15\n");
		if (armor == 5)printf("               방어력 : 20\n");
		if (armor == 6)printf("               방어력 : ??\n");
		//printf("               방어력 : %d                \n");
		printf("                                          \n");
		if (dex == 0)printf("                 민첩 : 0\n");
		if (dex == 1)printf("                 민첩 : 5\n");
		if (dex == 2)printf("                 민첩 : 10\n");
		if (dex == 3)printf("                 민첩 : 15\n");
		if (dex == 4)printf("                 민첩 : 20\n");
		printf("                                          \n");
		if (level == 1)printf("               체력   : 25\n");
		//printf("               체력   : %d                \n");
		printf("                                          \n");
		if (level == 1)printf("               마나   : 10\n");
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
		if (weapon == 0)printf("                 무기 : 맨손\n");
		if (weapon == 1)printf("                 무기 : 커튼봉\n");
		if (weapon == 2)printf("                 무기 : 쇠파이프\n");
		if (weapon == 3)printf("                 무기 : 골프채\n");
		if (weapon == 4)printf("                 무기 : 녹슨 진검\n");
		if (weapon == 5)printf("                 무기 : 날카로운 진검\n");
		if (weapon == 6)printf("                 무기 : 딜도\n");
		//printf("                 무기 : 맨손\n");
		printf("                                          \n");
		if (armor == 0)printf("               방어구 : 앞치마\n");
		if (armor == 1)printf("               방어구 : 동물 잠옷\n");
		if (armor == 2)printf("               방어구 : 청바지 청자켓\n");
		if (armor == 3)printf("               방어구 : 롱패딩\n");
		if (armor == 4)printf("               방어구 : 두꺼운 검도복\n");
		if (armor == 5)printf("               방어구 : 신형 전투복\n");
		if (armor == 6)printf("               방어구 : 전신 타이즈\n");
		//printf("               방어구 : 앞치마\n");
		printf("                                          \n");
		if (riding == 0)printf("               라이딩 : 없음\n");
		if (riding == 1)printf("               라이딩 : 인라인 스케이트\n");
		if (riding == 2)printf("               라이딩 : 킥보드\n");
		if (riding == 3)printf("               라이딩 : 악센트\n");
		if (riding == 4)printf("               라이딩 : K3\n");
		if (riding == 5)printf("               라이딩 : 두돈반\n");
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

int battlestatus()
{
	
}

int firstbattle1()
{
	system("cls");
	mobhp = 20;
	mobattdm = 3;
	if (level = 1) { hp = 25; mp = 10; }
	printf("\{뒤틀린 인간\} 이 나타났다!");
	_sleep(1000);
	system("cls");
	printf("┌─────────┐         ┌─────────┐");
	printf("┌─────────┐         ┌─────────┐");
	printf("┌─────────┐         ┌─────────┐");
	printf("┌─────────┐         ┌─────────┐");
	printf("┌─────────┐         ┌─────────┐");
	printf("┌─────────┐         ┌─────────┐");
	printf("┌─────────┐         ┌─────────┐");
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

	scanf("%d", &select0);

	if (select0 == 2) {
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
		_sleep(100);
		printf("2");
		_sleep(100);
		printf("세");
		_sleep(100);
		printf("기 ");
		_sleep(100);
		printf("미");
		_sleep(100);
		printf("래");
		_sleep(100);
		printf("인");
		_sleep(100);
		printf("간 ");
		_sleep(100);
		printf("안");
		_sleep(100);
		printf("상");
		_sleep(100);
		printf("근");
		_sleep(100);
		printf("의 ");
		_sleep(100);
		printf("지");
		_sleep(100);
		printf("구");
		_sleep(100);
		printf("종");
		_sleep(100);
		printf("말 ");
		_sleep(100);
		printf("생");
		_sleep(100);
		printf("존");
		_sleep(100);
		printf("기");
		_sleep(100);
		printf("!");
		_sleep(100);
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


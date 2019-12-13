#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#pragma warning(disable:4996)

//해야할일 : 전투 후 돌아갈곳 정하기 꼭


int liquor; // 강화재료
int weaponlevel; // 강화단계
int needliquor; //필요갯수
int getitem; // 아이템 습득 확률
int dobatt; //스킬 연속공격
int round; //공중제비 바퀴수
int tumble1;// 스킬 공중제비
int tumble2;
int tumble3;
int tumble4;
int skilldm;
int level; //레벨
int save; //저장
int load; //불러오기
int attdm; //몹에게 가하는 데미지 (0 = 2) (1 = 5) (2 = 11) (3 = 17) (4 = 23) (5 = 29) (6 = ??~??)
int att; //공격력 
int	def; //방어력 (0 = 0) (1 = 2) (2 = 6) (3 = 10) (4 = 15) (5 = 19) (6 = ??)durable
int dex; //민첩 (공격회피확률)
int maxhp; //레벨비례 체력량
int maxmp; //레벨비례 마나량
int maxxp; //필요경험치량
int	hp; //체력
int	mp; //마나
int xp; //경험치
int weapon; //무기 (0 = 맨손) (1 = 커튼봉) (2 = 쇠파이프) (3 = 골프채) (4 = 녹슨 진검) (5 = 날카로운 진검) (6 = 딜도)
int armor; //방어구 (0 = 앞치마) (1 = 동물 잠옷) (2 = 청바지 청자켓) (3 = 롱패딩) (4 = 두꺼운 검도복) (5 = 신형 전투복) (6 = 전신 타이즈)
int riding; //탈것 (0 = 없음) (1 = 인라인스케이트) (2 = 킥보드) (3 = 악센트) (3 = K3) (4 = 두돈반)
int potion; // 물약 체력 + 마나
int detoxpotion; // 해독물약
int poison;
int randmob;
int maxmobhp;
int maxmobmp;
int mobhp; //몬스터체력
int mobmp; //몬스터 마나
int mobatt; //몬스터 공격력
int mobattdm; //몬스터가 나에게 가하는 데미지
int damage; //몬스터데미지 - 방어력
int mobdef; //몬스터방어력
int moblevel;
int select0;
int select1;
int select2;
int select3;
int stack;//전투 했는지 안했는지 확인
int chance;

int secter1() //1층 스폰
{
	while (1)
	{
		if (hp < 25) { hp = 25, mp = 10; }
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
		printf(" 4. 건물 밖으로 나가기\n");
		printf(" 5. 저장하고 종료하기(미구현)\n");

		scanf("%d", &select1);
		if (select1 == 1) {
			chequip(1);//캐릭터 장비
		}
		if (select1 == 2) {
			chstatus(1);//캐릭터 정보 
		}
		if (select1 == 5) {
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
			printf("저장완료!\n");
			_sleep(500);
			printf("게임을 종료합니다.\n");
			return 0;//게임종료
		}
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
			if (a == 1) {
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
int secter2() //2층 안전지대
{
	static int a, b, c, d, e, f, g;
	while (1) {
		if (hp < 25) { hp = 25, mp = 10; }
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
		if (select2 == 4) {
			system("cls");
			printf("문 뒤쪽에서 알수없는 살기가 느껴진다\n\n");
			_sleep(1500);
			printf("들어가시겠습니까?\n");
			printf("==============================\n");
			printf(" 1. 들어간다\n");
			printf(" 2. 다시 돌아간다\n");
			scanf("%d", &g);
			if (g == 2) {
				secter2();
			}
			if (g == 1) {
				if (stack == 0) {
					system("cls");
					printf("철컥!    ");
					_sleep(500);
					printf("철컥!\n\n");
					_sleep(1000);
					printf("문이 잠겨있다...\n\n");
					_sleep(1000);
					printf("다른곳에서 열쇠를 찾아보자");
					_sleep(1500);
					secter2();
				}
				if (stack > 1) {
					system("cls");
					printf("이미 진행한 구역입니다.\n\n");
					_sleep(1000);
					printf("전투만 다시 진행합니다.");
					_sleep(1000);
					mobstatus();
				}
				system("cls");
				printf("[202호 열쇠] 를 사용했습니다!\n\n");
				_sleep(1000);
				printf("손에 무기를 꽉 쥐고\n\n");
				_sleep(1500);
				printf("문을 벌컥! 열었다\n\n");
				_sleep(1500);
				printf("그 소리에 반응하듯\n\n");
				_sleep(1500);
				printf("몬스터가 불쾌한 소리를 내며 나에게 다가왔다!\n\n");
				_sleep(1500);
				mobstatus();
			}
		}
		if (select2 == 6) {
			secter1();
		}
		if (select2 == 1) {
			chequip(2);//캐릭터 장비
		}
		if (select2 == 2) {
			chstatus(2);//캐릭터 정보 
		}
		if (select2 == 3) {
			if (stack > 0) {
				system("cls");
				printf("이미 진행한 구역입니다.\n\n");
				_sleep(1500);
				secter2();
			}
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
			if (a == 2) {
				secter2(); //다시 돌아가기
			}
			if (a == 1) {
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
				if (b == 2)secter2();//돌아가기
				if (b == 1) {
					system("cls");
					printf("살금");
					_sleep(300);
					printf(".");
					_sleep(300);
					printf(".");
					_sleep(300);
					printf(".");
					_sleep(300);
					printf(".   ");
					_sleep(300);
					printf("살금");
					_sleep(300);
					printf(".");
					_sleep(300);
					printf(".");
					_sleep(300);
					printf(".");
					_sleep(300);
					printf(".\n\n");
					_sleep(1000);
					printf("소리를 죽이고 조심스럽게 거실로 진입했다.\n\n");
					_sleep(1500);
					printf("거실 한구석에 커튼봉이 떨어져있다.\n\n");
					_sleep(1500);
					printf("튼튼하지는 않지만 없는것 보다는 나을것같다.\n\n");
					_sleep(1500);
					printf("===================================================\n");
					printf("1. [커튼봉] 을 장비한다.\n\n");
					printf("2. 필요없다! 난 양주시 꿀주먹이니까!.\n\n");
					scanf("%d", &c);
					if (c == 2) {
						system("cls");
						printf("지랄말고 껴라\n\n");
						_sleep(1500);
						printf("말 안들으면 게임 꺼버린다\n\n");
						_sleep(1500);
						printf("===================================================\n");
						printf("1. ㅈㅅ 끼겠음.\n\n");
						printf("2. 내가 왜 말을 들어야하지?.\n\n");
						scanf("%d", &f);
						if (f == 2) {
							system("cls"); printf("걍 하지마셈~"); _sleep(1500); exit(0);
							if (f == 1) {
								system("cls");
								weapon = 1;
								printf(" [커튼봉] 을 장착했다!\n\n");
								_sleep(1000);
								printf(" 공격력이 증가했다!   공격력 3 -> 5");
								_sleep(2000);
								att = 5;
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
							}
						}
						if (c == 1) {
							system("cls");
							weapon = 1;
							printf(" [커튼봉] 을 장착했다!\n\n");
							_sleep(1000);
							printf(" 공격력이 증가했다!   공격력 2 -> 5");
							_sleep(2000);
							att = 5;
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
								printf("\n\n\n\n\n\n\n\n\n\n\"인간이 왜 잘못된 선택을 할까요? 직관을 믿기 때문이죠\"\n");
								printf("                                -마이클 루이스-\n\n");
								_sleep(2500);
								printf("다시 선택해보세요");
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
								if (d == 2) { printf("겁쟁이는 나가리"); exit(0); }
								if (d == 1) {
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
									scanf("%d", &e);
									if (e == 2) {
										if (dex >= 1) {
											system("cls"); printf("무사히 도망쳤다!");
											secter2();
										}
										else {
											if (dex < 1) {
												system("cls");
												printf("도망칠 수 없다!");
												tutorialmob();
											}
										}
									}
								}
							}
							if (d == 1) {
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
								scanf("%d", &e);
								if (e == 2) {
									if (dex >= 1) {
										system("cls"); printf("무사히 도망쳤다!");
										secter2();
									}
									else {
										if (dex < 1) {
											system("cls");
											printf("도망칠 수 없다!");
											tutorialmob();
										}
									}
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
		printf("               공격력 : %d                \n", att);
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
		if (dex == 0)printf("               민첩 : 0\n");
		if (dex == 1)printf("               민첩 : 5\n");
		if (dex == 2)printf("               민첩 : 10\n");
		if (dex == 3)printf("               민첩 : 15\n");
		if (dex == 4)printf("               민첩 : 20\n");
		printf("                                          \n");
		printf("               체력   : [%d / %d]                \n",maxhp, hp);
		printf("                                          \n");
		printf("               마나   : [%d / %d]                \n",maxmp, mp);
		printf("                                          \n");
		printf("               경험치 : [%d / %d]                \n",maxxp, xp);
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
		if (weapon == 11)printf("                 무기 : +1 커튼봉\n");
		if (weapon == 12)printf("                 무기 : +2 커튼봉\n");
		if (weapon == 13)printf("                 무기 : +3 커튼봉\n");
		if (weapon == 2)printf("                 무기 : 쇠파이프\n");
		if (weapon == 21)printf("                 무기 : +1 쇠파이프\n");
		if (weapon == 22)printf("                 무기 : +2 쇠파이프\n");
		if (weapon == 23)printf("                 무기 : +3 쇠파이프\n");
		if (weapon == 24)printf("                 무기 : +4 쇠파이프\n");
		if (weapon == 25)printf("                 무기 : +5 쇠파이프\n");
		if (weapon == 3)printf("                 무기 : 골프채\n");
		if (weapon == 31)printf("                 무기 : +! 골프채\n");
		if (weapon == 32)printf("                 무기 : +2 골프채\n");
		if (weapon == 33)printf("                 무기 : +3 골프채\n");
		if (weapon == 34)printf("                 무기 : +4 골프채\n");
		if (weapon == 35)printf("                 무기 : +5 골프채\n");
		if (weapon == 4)printf("                 무기 : 녹슨 진검\n");
		if (weapon == 41)printf("                 무기 : +1 녹슨 진검\n");
		if (weapon == 42)printf("                 무기 : +2 녹슨 진검\n");
		if (weapon == 43)printf("                 무기 : +3 녹슨 진검\n");
		if (weapon == 44)printf("                 무기 : +4 녹슨 진검\n");
		if (weapon == 45)printf("                 무기 : +5 녹슨 진검\n");
		if (weapon == 46)printf("                 무기 : +6 녹슨 진검\n");
		if (weapon == 47)printf("                 무기 : +7 녹슨 진검\n");
		if (weapon == 5)printf("                 무기 : 날카로운 진검\n");
		if (weapon == 51)printf("                 무기 : +1 날카로운 진검\n");
		if (weapon == 52)printf("                 무기 : +2 날카로운 진검\n");
		if (weapon == 53)printf("                 무기 : +3 날카로운 진검\n");
		if (weapon == 54)printf("                 무기 : +4 날카로운 진검\n");
		if (weapon == 55)printf("                 무기 : +5 날카로운 진검\n");
		if (weapon == 56)printf("                 무기 : +6 날카로운 진검\n");
		if (weapon == 57)printf("                 무기 : +7 날카로운 진검\n");
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


int enchant()
{
	system("cls");
	static int a;
	printf("              ┌───────────────────────┐\n");
	printf("              │          301호 대장장이의 집 - 강화소        │\n");
	printf("              └───────────────────────┘\n\n");
	printf("뭐야 아직 안죽었구만!\n\n");
	_sleep(1500);
	printf("물건은 가져왔겠지?\n");
	_sleep(1500);
	printf("===========================\n");
	printf("1. 무기를 강화한다");
	printf("2. 강화소를 떠난다");
	scanf("%d", &a);
	if (a == 2) { secter2(); }
	system("cls");
	while (1)
	{
		if (weapon == 1) { needliquor = 1; }
		if (weapon == 11) { needliquor = 1; }
		if (weapon == 11) { needliquor = 1; }
		if (weapon == 11) { needliquor = 1; }
		if (weapon == 11) { needliquor = 2; }
		if (weapon == 11) { needliquor = 2; }
		system("cls");
		printf("┌─────────────────┐");
		if (weapon == 1) { printf("    장비중인 무기 : 커튼봉"); }
		if (weapon == 11) { printf("    장비중인 무기 : +1 커튼봉"); }
		if (weapon == 12) { printf("    장비중인 무기 : +2 커튼봉"); }
		if (weapon == 13) { printf("    장비중인 무기 : +3 커튼봉"); }
		if (weapon == 2) { printf("    장비중인 무기 : 쇠파이프"); }
		if (weapon == 21) { printf("    장비중인 무기 : +1 쇠파이프"); }
		if (weapon == 22) { printf("    장비중인 무기 : +2 쇠파이프"); }
		if (weapon == 23) { printf("    장비중인 무기 : +3 쇠파이프"); }
		if (weapon == 24) { printf("    장비중인 무기 : +4 쇠파이프"); }
		if (weapon == 25) { printf("    장비중인 무기 : +5 쇠파이프"); }
		if (weapon == 3) { printf("    장비중인 무기 : 골프채"); }
		if (weapon == 31) { printf("    장비중인 무기 : +1 골프채"); }
		if (weapon == 32) { printf("    장비중인 무기 : +2 골프채"); }
		if (weapon == 33) { printf("    장비중인 무기 : +3 골프채"); }
		if (weapon == 34) { printf("    장비중인 무기 : +4 골프채"); }
		if (weapon == 35) { printf("    장비중인 무기 : +5 골프채"); }
		if (weapon == 4) { printf("    장비중인 무기 : 녹슨 진검"); }
		if (weapon == 41) { printf("    장비중인 무기 : +1 녹슨 진검"); }
		if (weapon == 42) { printf("    장비중인 무기 : +2 녹슨 진검"); }
		if (weapon == 43) { printf("    장비중인 무기 : +3 녹슨 진검"); }
		if (weapon == 44) { printf("    장비중인 무기 : +4 녹슨 진검"); }
		if (weapon == 45) { printf("    장비중인 무기 : +5 녹슨 진검"); }
		if (weapon == 46) { printf("    장비중인 무기 : +6 녹슨 진검"); }
		if (weapon == 47) { printf("    장비중인 무기 : +7 녹슨 진검"); }
		if (weapon == 5) { printf("    장비중인 무기 : 날카로운 진검"); }
		if (weapon == 51) { printf("    장비중인 무기 : +1 날카로운 진검"); }
		if (weapon == 52) { printf("    장비중인 무기 : +2 날카로운 진검"); }
		if (weapon == 53) { printf("    장비중인 무기 : +3 날카로운 진검"); }
		if (weapon == 54) { printf("    장비중인 무기 : +4 날카로운 진검"); }
		if (weapon == 55) { printf("    장비중인 무기 : +5 날카로운 진검"); }
		if (weapon == 56) { printf("    장비중인 무기 : +6 날카로운 진검"); }
		if (weapon == 57) { printf("    장비중인 무기 : +7 날카로운 진검"); }
		printf("├────────┬────────┤");
		printf("│    필요 재료   │    강화 확률   │");
		printf("│   고량주 %d 개 │       %d       │", needliquor, chance);
		printf("└────────┴────────┘");
		if (weapon == 0)printf("                 무기 : 맨손\n");
		if (weapon == 1)printf("                 무기 : 커튼봉\n");
		if (weapon == 2)printf("                 무기 : 쇠파이프\n");
		if (weapon == 3)printf("                 무기 : 골프채\n");
		if (weapon == 4)printf("                 무기 : 녹슨 진검\n");
		if (weapon == 5)printf("                 무기 : 날카로운 진검\n");
		if (weapon == 6)printf("                 무기 : 딜도\n");
	}
}

int enchantchance()
{

	chance = rand() % 100 + 1;
	if (chance <= 100)
	printf("※주의※ 강화 실패시 아이템이 파괴될 수 있습니다.");
	_sleep(1500);

}

int tutorialmob()
{
	system("cls");
	printf("[녹아내린 인간] 이(가) 나타났다!\n\n");
	_sleep(1500);
	system("cls");
	//녹아내린 인간
	mobhp = 15;
	mobmp = 0;
	mobatt = 3;
	firstbattle();
	return 0;
}



int mobstatus()
{
	randmob = rand() % 3 + 1;

	if (randmob == 1) {
		system("cls");
		printf("LV. 2 [뒤틀린 시체] 이(가) 나타났다!\n\n");
		_sleep(1500);
		system("cls");
		//뒤틀린 시체
		moblevel = 2;
		mobhp = 23;
		mobmp = 0;
		mobatt = 5;
		battletwo(1);
	}
	if (randmob == 2) {
		system("cls");
		printf("LV. 3 [부풀어오른 시체] 이(가) 나타났다!\n\n");
		_sleep(1500);
		printf("[부풀어오른 시체] 이(가) 곧 터질것 처럼 위태롭다!\n\n");
		_sleep(1500);
		system("cls");
		//부풀어오른 시체 (죽으면 터지면서 데미지)
		moblevel = 3;
		mobhp = 10;
		mobmp = 0;
		mobatt = 3;
		battletwo(2);
	}
	if (randmob == 3) {
		system("cls");
		printf("LV. 3 [썩은 시체] 이(가) 나타났다!\n\n");
		_sleep(1500);
		printf("이녀석은 유난히 악취가 심하다\n\n");
		_sleep(1500);
		system("cls");
		//피격시 턴마다 독데미지 1
		moblevel = 3;
		mobhp = 30;
		mobmp = 0;
		mobatt = 8;
		battletwo(3);
	}
}

int doubleattack()
{
	dobatt = rand() % att + 1;
	mobhp -= dobatt;
	printf("적에게 %d 데미지!\n", dobatt);
	_sleep(1000);
	dobatt = rand() % att + 1;
	mobhp -= dobatt;
	printf("적에게 %d 데미지!\n\n", dobatt);
	_sleep(1000);
	return 0;
}

int tumble()
{
	round = rand() % 3;
	tumble1 = rand() % att + 1;
	tumble2 = rand() % att + 1;
	tumble3 = rand() % att + 1;
	tumble4 = rand() % att + 1;

	if (round == 0) {
		system("cls");
		printf("휘릭~\n\n");
		_sleep(1500);
		printf("히릿~\n\n");
		_sleep(1500);
		printf("두바퀴 돌았다!\n\n");
		_sleep(1500);
		mobhp -= tumble1 + tumble2;
		printf("적에게 %d 데미지!", tumble1+tumble2);
		_sleep(1500);
		system("cls");
	}
	if (round == 1) {
		system("cls");
		printf("휘릭~\n\n");
		_sleep(1500);
		printf("히릿~\n\n");
		_sleep(1500);
		printf("히익~\n\n");
		_sleep(1500);
		printf("세바퀴 돌았다!\n\n");
		_sleep(1500);
		mobhp -= tumble1 + tumble2+tumble3;
		printf("적에게 %d 데미지!", tumble1 + tumble2+ tumble3);
		_sleep(1500);
		system("cls");
	}
	if (round == 2) {
		system("cls");
		printf("휘릭~\n\n");
		_sleep(1500);
		printf("히릿~\n\n");
		_sleep(1500);
		printf("히익~\n\n");
		_sleep(1500);
		printf("응기잇~\n\n");
		_sleep(1500);
		printf("네바퀴 돌았다!\n\n");
		_sleep(1500);
		mobhp -= tumble1 + tumble2 + tumble3+tumble4;
		printf("적에게 %d 데미지!", tumble1 + tumble2 + tumble3+tumble4);
		_sleep(1500);
		system("cls");
	}
	mp -= 12;
	return 0;
}

int battletwo(int mobselect)
{
	static int a, b, c;
	while (1)
	{
		system("cls");
		_sleep(1000);
		system("cls");
		printf("┌────────┐         ┌────────┐\n");
		if (mobselect == 1) printf("       LV. %d                      LV. %d   \n", level, moblevel);
		if (mobselect == 1) printf("       안상근                    뒤틀린 시체   \n");
		if (mobselect == 2) printf("       안상근                   부풀어오른 시체   \n");
		if (mobselect == 3) printf("       안상근                     썩은 시체   \n");
		printf("                                                 \n");
		printf("        H P                           H P        \n");
		printf("    [ %d / %d ]                   [ %d / %d ]    \n",maxhp, hp, maxmobhp, mobhp);
		printf("                                                 \n");
		printf("        M P                           M P        \n");
		printf("    [ %d / %d ]                   [ %d / %d ]    \n",maxmp, mp, maxmobmp, mobmp);
		printf("                                                 \n");
		printf("└────────┘         └────────┘\n\n");
		printf("1. 기본공격\n");
		if (mp >= 6) printf("2. 스킬 : 연속공격\n");
		if (mp >= 12) printf("3. 스킬 : 공중제비\n");
		scanf("%d", &a);
		if (a == 1) {
			system("cls");
			printf("[안상근] 은(는) 무기를 휘둘렀다!");
			_sleep(1000);
			printf("적에게 %d 데미지!", att);

		}
		if (a == 2) {
			if (mp < 6) { 
				printf("마나가 부족합니다.");
			}
			system("cls");
			printf("[연속공격] 스킬 사용!\n\n");
			_sleep(1500);
			doubleattack();
			mp -= 6;
			mobattdm = rand() % mobatt + 1;
			hp -= mobattdm;
			printf("[안상근] 에게 %d 데미지!\n", mobattdm);
			_sleep(1000);
			if (poison == 1) { 
				hp -= poison;
				printf("[중독] 상태로 지속데미지를 입고있다.(데미지 %d)", poison); 
			}
			if (mobselect == 3 && poison == 0) {
				printf("[중독] 상태이상 발생!");
				poison = 1;
			}


		}
		if (a == 3) {
			if (mp < 12) {
				system("cls");
				printf("마나가 부족합니다.");
			}
			system("cls");
			printf("[안상근] 는(은) 흥분한 나머지 [공중제비] 를 돌았다!");
			_sleep(1500);
			tumble();
			if (mobselect == 3) { 
				system("cls");
				mobattdm = rand() % mobatt + 1;
				damage = mobattdm - def;
				hp -= damage;
				printf("[안상근] 에게 %d 데미지!\n\n", damage);
				if (poison == 1) {
					hp -= poison;
					printf("[중독] 상태로 지속데미지를 입고있다.(데미지 %d)", poison);
				}
				if (mobselect == 3 && poison == 0) {
					printf("[중독] 상태이상 발생!");
					poison = 1;
				}
			}
			mobattdm = rand() % mobatt + 1;
			damage = mobattdm - def;
			hp -= damage;
			printf("[안상근] 에게 %d 데미지!\n\n", damage);
			mp -= 12;
		}
	}
	system("cls");
	printf("적을 제압했다!");
	xp = rand() % level + 3;
	if (hp < maxhp) { hp = maxhp, mp = maxmp; }
	poison = 0;
	return 0;
}

int firstbattle()
{
	static int a, b, c;
	while (1)
	{
		system("cls");
		if (hp <= 0) { hp = 25, mp = 10; }
		_sleep(1000);
		system("cls");
		printf("┌────────┐         ┌────────┐\n");
		printf("       안상근                    녹아내린 인간   \n");
		printf("                                                 \n");
		printf("        H P                           H P        \n");
		printf("    [ 25 / %d ]                   [ 15 / %d ]    \n", hp, mobhp);
		printf("                                                 \n");
		printf("        M P                           M P        \n");
		printf("    [ 10 / %d ]                    [ 0 / 0 ]    \n", mp);
		printf("                                                 \n");
		printf("└────────┘         └────────┘\n\n");
		printf("1. 기본공격\n");
		if (mp >= 6) printf("2. 스킬 : 연속공격\n");
		if (mp >= 12) printf("3. 스킬 : 공중제비\n");
		scanf("%d", &a);
		if (a == 1)
		{
			system("cls");
			printf("[녹아내린 인간] 에게 기본공격!\n\n");
			attdm = rand() % att + 1;
			mobhp -= attdm;
			printf("[녹아내린 인간] 에게 %d 데미지!\n\n", attdm);
			_sleep(1500);
			mobattdm = rand() % mobatt + 1;
			damage = mobattdm - def;
			hp -= damage;
			printf("[안상근] 에게 %d 데미지!\n\n", damage);
			_sleep(1500);
			system("cls");
		}
		if (a == 2) {
			if (mp < 6) { 
				system("cls");
				printf("마나가 부족합니다.");
				_sleep(1000);
			}
			else {
				system("cls");
				printf("[녹아내린 인간] 에게 [연속공격] 스킬사용!\n\n");
				_sleep(1500);
				mp -= 6;
				dobatt = rand() % att + 1;
				mobhp -= dobatt;
				printf("[녹아내린 인간] 에게 %d 데미지!\n\n", dobatt);
				_sleep(1500);
				dobatt = rand() % att + 1;
				mobhp -= dobatt;
				printf("[녹아내린 인간] 에게 %d 데미지!\n\n", dobatt);
				_sleep(1500);
				mobattdm = rand() % mobatt + 1;
				damage = mobattdm - def;
				hp -= damage;
				printf("[안상근] 에게 %d 데미지!\n\n", damage);
				_sleep(1500);
				system("cls");
			}
		}
		if (hp < 0) {
			system("cls");
			printf("당신은 설사 바이러스에 감염되었습니다...\n\n");
			_sleep(1500);
			printf("=====================================\n");
			printf("1. 전투를 다시 시작하기.\n");
			printf("2. 안전지대로 돌아가기.\n");
			scanf("%d", &b);
			if (b == 1) mobstatus(1);
			if (b == 2) secter2();
		}
		if (mobhp < 1) {
			system("cls");
			printf("적을 제압했다!\n\n");
			_sleep(1500);
			xp = rand() % 5 + 1;
			printf("%d 의 경험치를 획득했다!\n\n", xp);
			_sleep(1500);
			getitem = rand() % 10 + 1;
			if (getitem < 6) break;
			if (getitem > 5) {
				system("cls");
				printf("몬스터가 있던 자리에\n\n");
				_sleep(1000);
				printf("[고량주] 한병이 놓여있다.\n\n");
				_sleep(1000);
				printf("일단 챙겨두자\n\n");
				_sleep(1000);
				printf("[고량주] 한병을 획득했다!\n\n");
				_sleep(1000);
				liquor++;
				if (mobhp <= 0) break;
			}
		}
	}
	system("cls");
	printf("겨우 제압했다...\n\n");
	_sleep(1000);
	printf("대체 왜 이런게 집에 있는거지?\n\n");
	_sleep(1000);
	printf("어떤 일이 있었길래 이렇게 변해버린거지?\n\n");
	_sleep(1000);
	printf("너무 혼란스럽다...\n\n");
	_sleep(1000);
	printf("어서 다른 생존자를 찾아야겠다\n\n");
	_sleep(1000);
	printf("전리품으로 [202호 열쇠] 를 획득하였습니다!");
	_sleep(1500);
	system("cls");
	printf("황급히 집을 나왔다.\n\n");
	_sleep(1500);
	stack = 1;
	if (hp < maxhp) { hp = maxhp, mp = maxmp; }
	secter2();
	return 0;
}

int levelsystem()
{
	if (xp > 250) {
		level++;
		att += 2;
		def += 1;
		dex += 1;
		maxhp += 9;
		maxmp += 5;
		hp = maxhp;
		mp = maxmp;
		exit(0);
	}
	if (xp > 75) {
		level++;
		att += 2;
		def += 1;
		dex += 1;
		maxhp += 8;
		maxmp += 5;
		hp = maxhp;
		mp = maxmp;
		exit(0);
	}
	if (xp > 25) {
		level++;
		att += 2;
		def += 1;
		dex += 1;
		maxhp += 5;
		maxmp += 3;
		hp = maxhp;
		mp = maxmp;
		exit(0);
	}
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
		level = 1;
		att = 2;
		def = 0;
		dex = 0;
		maxhp = 30;
		maxmp = 15;
		maxxp = 25;
		hp = 25;
		mp = 10;
		xp = 0;
		potion = 0;
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

		_sleep(1500);
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
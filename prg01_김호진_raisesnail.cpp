#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <time.h>

int menu_select;

typedef struct {
	int level;
	int count;
} SNAIL;

void print_snail_info(SNAIL snail);

void print_snail_info(SNAIL snail) {
	printf(" %d레벨 달팽이 : %d개\n\n", snail.level, snail.count);
	SNAIL s;
}

void title() {
	printf(".....@@@@@@@.......@@......@@@@...@@@@@..@@@@@@@.....\n");  Sleep(100);
	printf(".....@@....@......@@@@......@@...@@......@@..........\n");  Sleep(100);
	printf(".....@@@@@@......@@..@@.....@@.....@@....@@@@@@@.....\n");  Sleep(100);
	printf(".....@@...@@....@@@@@@@@....@@.......@@..@@..........\n");  Sleep(100);
	printf(".....@@....@@..@@......@@..@@@@..@@@@@...@@@@@@@.....\n");  Sleep(100);
	printf(".....................................................\n");  Sleep(100);
	printf("......@@@@@..@@@....@@......@@......@@@@..@@.........\n");  Sleep(100);
	printf(".....@@......@@.@...@@.....@@@@......@@...@@.........\n");  Sleep(100);
	printf(".......@@....@@..@..@@....@@..@@.....@@...@@.........\n");  Sleep(100);
	printf(".........@@..@@...@.@@...@@@@@@@@....@@...@@.........\n");  Sleep(100);
	printf(".....@@@@@...@@....@@@..@@......@@..@@@@..@@@@@@.....\n");  Sleep(100);
	printf("\nPRESS ENTER KEY TO START.................\n");
	printf("엔터키를 눌러서 게임을 시작하세요..........\n");
	getchar();
}

void How_to_play() {
	system("cls");
	Sleep(300);
	printf("당신은 메뉴에서 달팽이를 생성할 수 있습니다.\n"); Sleep(300);
	printf("(Enter를 눌러서 계속)\n");
	getchar();
	printf("같은 등급의 달팽이를 합성하여 상위 등급으로 진화시키세요.\n"); Sleep(300);
	printf("(Enter를 눌러서 계속)\n");
	getchar();
	printf("달팽이를 진화시켜서 보스배틀에 도전하세요.\n"); Sleep(300);
	printf("(Enter를 눌러서 계속)\n");
	getchar();
	printf("최강의 달팽이를 만들어서 마지막 보스를 물리치세요.\n"); 
	printf("(Enter를 눌러서 게임을 시작하세요.)\n");
	getchar();
}



int main(void) {
	//title();
	//How_to_play();
	SNAIL snail_arr[5] = { {1,0},{2,0},{3,0}, {4,0}, {5,0} };
	int x;
	int boss_clear = 0;
	//snail_arr[4].count++;
	//snail_arr[2].count++;
	snail_arr[3].count++;
	if (snail_arr[2].count >= 1) {
		boss_clear++;
	}
	else if (snail_arr[3].count >= 1) {
		boss_clear++;
	}
	else if (snail_arr[4].count >= 1) {
		boss_clear++;
	}
	while (1) {

		system("cls");
		printf("\n-----------------------------\n");
		printf("\n<1>   달팽이 수 확인\n");
		printf("\n<2>   달팽이 생성\n");
		printf("\n<3>   달팽이 강화\n");
		printf("\n<4>   보스배틀\n");
		printf("\n-----------------------------\n");
		printf("\n\n원하는 메뉴를 선택하세요 >> ");
		scanf_s("%d", &x);

		if (x == 1) {
			system("cls");
			printf("\n");
			for (int i = 0; i < 5; i++) {
				print_snail_info(snail_arr[i]);
			}
			printf("\n\n엔터키를 눌러 메뉴로 돌아가세요.\n");
			getchar();
			getchar();
		}

		else if (x == 2) {  //달팽이생성메뉴
			int snail_count;
			system("cls");
			printf("\n-------------------------------------------------------------\n");
			printf("\n1. 1레벨 달팽이 x 1  (1초 소요)\n");
			printf("\n2. 1레벨 달팽이 x 5  (5초 소요)\n");
			printf("\n3. 2레벨 달팽이 x 5  (5초 소요) (1단계 보스 클리어 이후 해제)\n");
			printf("\n4. 3레벨 달팽이 x 5  (5초 소요) (2단계 보스 클리어 이후 해제)\n");
			printf("\n-------------------------------------------------------------\n");
			printf("\n\n몇마리의 달팽이를 생성할 것인지 고르세요 >> ");
			scanf_s("%d", &snail_count);

			if (snail_count == 1) {
				system("cls");
				printf("1초 후에 달팽이가 추가됩니다.");
				snail_arr[0].count++;
				Sleep(1000);
			}

			else if (snail_count == 2) {
				system("cls");
				snail_arr[0].count += 5;
				for (int i = 5; i > 0; i--) {
					printf("%d초 후에 달팽이가 추가됩니다.", i);
					Sleep(1000);
					system("cls");
				}
			}

			else if (snail_count == 3 and boss_clear == 1) {
				system("cls");
				snail_arr[1].count += 5;
				for (int i = 5; i > 0; i--) {
					printf("%d초 후에 달팽이가 추가됩니다.", i);
					Sleep(1000);
					system("cls");
				}
			}
			else if (snail_count == 3 and boss_clear < 1) {
				system("cls");
				printf("아직 사용할 수 없는 시스템입니다.");
				Sleep(1000);
			}

			else if (snail_count == 4 and boss_clear == 2) {
				system("cls");
				snail_arr[2].count += 5;
				for (int i = 5; i > 0; i--) {
					printf("%d초 후에 달팽이가 추가됩니다.", i);
					Sleep(1000);
					system("cls");
				}
			}
			else if (snail_count == 4 and boss_clear < 2) {
				system("cls");
				printf("아직 사용할 수 없는 시스템입니다.");
				Sleep(1000);
			}


			else if (snail_count > 4) {
				system("cls");
				printf("잘못된 입력값입니다.\n");
				printf("메뉴로 돌아갑니다.\n");
				Sleep(1000);
			}
		}

		else if (x == 3) {  //강화메뉴
			system("cls");
			int select_level;
			printf("\n-------------------------------\n");
			printf("\n1. <1레벨 + 1레벨> (확률: 70%%)\n");
			printf("\n2. <2레벨 + 2레벨> (확률: 50%%)\n");
			printf("\n3. <3레벨 + 3레벨> (확률: 40%%)\n");
			printf("\n4. <4레벨 + 4레벨> (확률: 30%%)\n");
			printf("\n-------------------------------\n");
			printf("\n\n강화할 레벨을 선택하세요.(번호 입력)>> ");
			scanf_s("%d", &select_level);

			if (select_level == 1) {
				if (snail_arr[0].count < 2) {
					system("cls");
					printf("합성할 달팽이가 부족합니다.\n");
					printf("1초 후에 메뉴로 돌아갑니다.\n");
					Sleep(1000);
				}

				else {
					system("cls");
					snail_arr[0].count -= 2;
					if (rand() % 100 < 70) {
						snail_arr[1].count++;
						printf("★강화 성공★");
					}
					else
						printf("강화 실패....");
					Sleep(1000);
				}
			}

			if (select_level == 2) {
				if (snail_arr[1].count < 2) {
					system("cls");
					printf("합성할 달팽이가 부족합니다.\n");
					printf("1초 후에 메뉴로 돌아갑니다.\n");
					Sleep(1000);
				}

				else {
					system("cls");
					snail_arr[1].count -= 2;
					if (rand() % 100 < 50) {
						snail_arr[2].count++;
						printf("★강화 성공★");
					}
					else
						printf("강화 실패....");
					Sleep(1000);
				}
			}

			if (select_level == 3) {
				if (snail_arr[2].count < 2) {
					system("cls");
					printf("합성할 달팽이가 부족합니다.\n");
					printf("1초 후에 메뉴로 돌아갑니다.\n");
					Sleep(1000);
				}

				else {
					system("cls");
					snail_arr[2].count -= 2;
					if (rand() % 100 < 40) {
						snail_arr[3].count++;
						printf("★강화 성공★");
					}
					else
						printf("강화 실패....");
					Sleep(1000);
				}
			}

			if (select_level == 4) {
				if (snail_arr[3].count < 2) {
					system("cls");
					printf("합성할 달팽이가 부족합니다.\n");
					printf("1초 후에 메뉴로 돌아갑니다.\n");
					Sleep(1000);
				}

				else {
					system("cls");
					snail_arr[3].count -= 2;
					if (rand() % 100 < 30) {
						snail_arr[4].count++;
						printf("★강화 성공★");
					}
					else
						printf("강화 실패....");
					Sleep(1000);
				}
			}


			else if (select_level > 4) {
				system("cls");
				printf("잘못된 입력값입니다.\n");
				printf("메뉴로 돌아갑니다.\n");
				Sleep(1000);
			}
		}

		else if (x == 4) {
			if (boss_clear == 1) {
				system("cls");
				printf("첫 번째로 상대할 보스는 작은 밀웜이다.\n");
				printf("(엔터키를 눌러서 계속)\n");
				getchar(); getchar();
				printf("#$&%#)(*&$$*&#!!!!\n");
				printf("(엔터키를 눌러서 계속)\n");
				getchar();
				printf("달팽이의 몸통박치기로 밀웜이 쉽게 쓰러져버렸다.\n");
				printf("(엔터키를 눌러서 계속)\n");
				getchar();
				system("cls");
				printf("★1단계 보스 처치 성공!★\n");
				printf("보상 : 2레벨 달팽이 10마리\n");
				printf("\n\n(3초 후에 메뉴로 돌아갑니다.)\n");
				Sleep(3000);
				snail_arr[1].count += 10;
				boss_clear++;
			}

			else if (snail_arr[3].count >= 1 or snail_arr[4].count and boss_clear == 2) {
				system("cls");
				printf("두 번째로 상대할 보스는 참새다.\n");
				printf("(엔터키를 눌러서 계속)\n");
				getchar(); getchar();
				printf("달팽이가 몸통박치기를 시전했지만 참새는 하늘로 날아가버렸다.\n");
				printf("(엔터키를 눌러서 계속)\n");
				getchar();
				printf("다시 참새가 땅으로 내려와 달팽이를 쪼려고 한다.\n");
				printf("(엔터키를 눌러서 계속)\n");
				getchar();
				printf("달팽이의 단단해지기!!!\n");
				printf("(엔터키를 눌러서 계속)\n");
				getchar();
				printf("단단한 껍질 덕분에 참새의 부리가 부러졌다.\n");
				printf("(엔터키를 눌러서 계속)\n");
				getchar();
				system("cls");
				printf("★2단계 보스 처치 성공!★\n");
				printf("보상 : 3레벨 달팽이 20마리\n");
				printf("\n\n(3초 후에 메뉴로 돌아갑니다.)\n");
				Sleep(3000);
				snail_arr[2].count += 20;
				boss_clear++;
			}

			else if (snail_arr[4].count >= 1 and boss_clear == 3) {
				system("cls");
				printf("마지막으로 상대할 보스는 제작자다.\n");
				printf("(엔터키를 눌러서 계속)\n");
				getchar(); getchar();
				printf("당신은 제작자를 상대하기 위해서 5레벨의 달팽이를 만들어버렸다.\n");
				printf("(엔터키를 눌러서 계속)\n");
				getchar();
				printf("제작자는 당신이 만들어낸 달팽이의 모습에 기겁하여 쓰러졌다.\n");
				printf("(엔터키를 눌러서 계속)\n");
				getchar();
				printf("최종보스라기엔 너무 허무하게 물리쳤다.\n");
				printf("(엔터키를 눌러서 계속)\n");
				getchar();
				system("cls");
				printf("★최종보스 처치 성공!★\n");
				printf("(엔터키를 눌러서 계속)\n");
				getchar();
				system("cls");
				printf("제가 만든 게임은 여기서 막을 내립니다.\n");
				printf("(엔터키를 눌러서 계속)\n");
				getchar();
				printf("게임을 플레이해주셔서 감사합니다.\n");
				printf("(엔터키를 눌러서 계속)\n");
				getchar();
				system("cls");
				printf("     _________    __  _________   ____ _    ____________  \n");
				printf("    / ____/   |  /  |/  / ____/  / __ \\ |  / / ____/ __ \\ \n");
				printf("   / / __/ /| | / /|_/ / __/    / / / / | / / __/ / /_/ / \n");
				printf("  / /_/ / ___ |/ /  / / /___   / /_/ /| |/ / /___/ _, _/  \n");
				printf("  \\____/_/  |_/_/  /_/_____/  \\____/  |___/_____/_/ |_|   \n\n");
				break;
			}
			else {
				system("cls");
				printf("아직 다음 보스를 상대하기엔 힘이 부족하다.\n\n");
				printf("더 높은 레벨의 달팽이를 데리고 오자.....\n\n");
				printf("(엔터키를 눌러서 계속)\n");
				getchar(); getchar();
			}

		}

	}
}



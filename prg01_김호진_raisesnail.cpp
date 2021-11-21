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
	printf("%d레벨 달팽이 : %d개\n\n", snail.level, snail.count);
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
	printf("당신은 1초마다 1레벨 달팽이를 생성할 수 있습니다.\n"); Sleep(300);
	printf("(Enter를 눌러서 계속)\n");
	getchar();
	printf("같은 등급의 달팽이를 합성하여 상위 등급으로 진화시키세요.\n"); Sleep(300);
	printf("(Enter를 눌러서 계속)\n");
	getchar();
	printf("특정 등급의 달팽이까지 진화시켜서 보스배틀에 도전하세요.\n"); Sleep(300);
	printf("(Enter를 눌러서 계속)\n");
	getchar();
	printf("최강의 달팽이를 만들어서 마지막 보스를 물리치세요.\n"); 
	printf("(Enter를 눌러서 게임을 시작하세요.)\n");
	getchar();
}

void menu() {
	srand((unsigned int)time(NULL));
	int x;
	printf("\n원하는 메뉴를 선택하고 숫자를 입력하세요.\n");
	printf("1. 달팽이 수 확인\n");
	printf("2. 강화하기\n");
	printf("3. 보스도전\n");
	printf("\n선택>>> ");
	scanf_s("%d", &x);
}


int main(void) {
	//title();
	//How_to_play();
	SNAIL snail_arr[5] = { {1,0},{2,0},{3,0}, {4,0}, {5,0} };
	int x;
while(1) {
	
	system("cls");
	printf("\n원하는 메뉴를 선택하고 숫자를 입력하세요.\n");
	printf("\n<1>   달팽이 수 확인\n");
	printf("\n<2>   1레벨 달팽이 생성\n");
	printf("\n<3>   강화하기\n");
	printf("\n<4>   보스배틀\n");
	printf("\n\n선택>>> ");
	scanf_s("%d", &x);
	
	if (x == 1) {
		system("cls");
		for (int i = 0; i < 5; i++) {
			print_snail_info(snail_arr[i]);
		}
		printf("\n\n3초 후에 메뉴로 돌아갑니다.");
		Sleep(3000);
	}
    
	else if (x == 2) {  //달팽이생성메뉴
		int snail_count;
		system("cls");
		printf("1.  1마리 생성(1초 소요)\n");
		printf("\n2.  5마리 생성(5초 소요)\n");
		printf("\n3. 10마리 생성(10초 소요)\n");
		printf("\n\n몇마리의 달팽이를 생성할 것인지 고르세요.");
		scanf_s("%d", &snail_count);
		
		if (snail_count == 1) {
			system("cls");
			printf("1초 후에 달팽이가 추가됩니다.");
			snail_arr[0].count++;
			Sleep(1000);
		}

		else if (snail_count == 2) {
			system("cls");
			printf("5초 후에 달팽이가 추가됩니다.");
			snail_arr[0].count += 5;
			Sleep(5000);
		}

		else if (snail_count == 3) {
			system("cls");
			printf("10초 후에 달팽이가 추가됩니다.");
			snail_arr[0].count += 10;
			Sleep(10000);
		}

		else if (snail_count > 3) {
			system("cls");
			printf("잘못된 입력값입니다.\n");
			printf("메뉴로 돌아갑니다.\n");
			Sleep(1000);
		}
	}

	else if (x == 3) {  //강화메뉴
		system("cls");
		int select_level;
		printf("1. <1레벨> (확률: 70%%)\n");
		printf("\n2. <2레벨> (확률: 50%%)\n");
		printf("\n3. <3레벨> (확률: 40%%)\n");
		printf("\n4. <4레벨> (확률: 30%%)\n");
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
				Sleep(1400);
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
				Sleep(1400);
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
				Sleep(1400);
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
				Sleep(1400);
			}
		}
		
		
		else if (select_level > 4) {
			system("cls");
			printf("잘못된 입력값입니다.\n");
			printf("메뉴로 돌아갑니다.\n");
			Sleep(1000);
		}
	}



}
    
	

}

#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <time.h>

int menu_select;

typedef struct {
	int level;
	int count;
} SNAIL;

typedef struct {
	int level;
	int hp;
} BOSS;


void print_snail_info(SNAIL snail);

void print_snail_info(SNAIL snail) {
	printf("%d레벨 달팽이 : %d개\n", snail.level, snail.count);
	SNAIL s;
}

void snail_spawn(SNAIL snail) {
	Sleep(2000);
	snail.count++;
	system("cls");

}

void menu() {
	printf("\n원하는 메뉴를 선택하고 숫자를 입력하세요.\n");
	printf("1. 강화하기\n");
	printf("2. 보스도전\n");
	scanf_s("%d", &menu_select);

	if (menu_select == 1) {
		system("cls");
		printf("원하는 등급의 달팽이를 선택하세요.\n");
		printf("\n1. 1레벨 달팽이\n");
		printf("\n2. 2레벨 달팽이\n");
		printf("\n3. 3레벨 달팽이\n");
		printf("\n4. 4레벨 달팽이\n");
		printf("\n5. 5레벨 달팽이\n");
	}

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
	Sleep(300);
	printf("당신에게는 2초마다 가장 낮은 등급의 달팽이가 주어집니다.\n"); Sleep(300);
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


int main(void) {

	SNAIL snail_arr[5] = { {1,0},{2,0},{3,0},{4,0},{5,0} };

	title();
	system("cls");
	How_to_play();
	system("cls");

	menu();
	while (menu_select == 1 or menu_select == 2) {

		for (int i = 0; i < 5; i++) {
			print_snail_info(snail_arr[i]);
		}
		
		Sleep(2000);
		snail_arr[0].count++;
		system("cls");

	}

}
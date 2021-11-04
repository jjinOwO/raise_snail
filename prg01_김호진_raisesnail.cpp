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
	printf("%d���� ������ : %d��\n", snail.level, snail.count);
	SNAIL s;
}

void snail_spawn(SNAIL snail) {
	Sleep(2000);
	snail.count++;
	system("cls");

}

void menu() {
	printf("\n���ϴ� �޴��� �����ϰ� ���ڸ� �Է��ϼ���.\n");
	printf("1. ��ȭ�ϱ�\n");
	printf("2. ��������\n");
	scanf_s("%d", &menu_select);

	if (menu_select == 1) {
		system("cls");
		printf("���ϴ� ����� �����̸� �����ϼ���.\n");
		printf("\n1. 1���� ������\n");
		printf("\n2. 2���� ������\n");
		printf("\n3. 3���� ������\n");
		printf("\n4. 4���� ������\n");
		printf("\n5. 5���� ������\n");
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
	printf("����Ű�� ������ ������ �����ϼ���..........\n");
	getchar();
}

void How_to_play() {
	Sleep(300);
	printf("��ſ��Դ� 2�ʸ��� ���� ���� ����� �����̰� �־����ϴ�.\n"); Sleep(300);
	printf("(Enter�� ������ ���)\n");
	getchar();
	printf("���� ����� �����̸� �ռ��Ͽ� ���� ������� ��ȭ��Ű����.\n"); Sleep(300);
	printf("(Enter�� ������ ���)\n");
	getchar();
	printf("Ư�� ����� �����̱��� ��ȭ���Ѽ� ������Ʋ�� �����ϼ���.\n"); Sleep(300);
	printf("(Enter�� ������ ���)\n");
	getchar();
	printf("�ְ��� �����̸� ���� ������ ������ ����ġ����.\n");
	printf("(Enter�� ������ ������ �����ϼ���.)\n");
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
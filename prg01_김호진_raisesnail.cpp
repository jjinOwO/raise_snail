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
	printf("%d���� ������ : %d��\n\n", snail.level, snail.count);
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
	printf("����Ű�� ������ ������ �����ϼ���..........\n");
	getchar();
}

void How_to_play() {
	system("cls");
	Sleep(300);
	printf("����� 1�ʸ��� 1���� �����̸� ������ �� �ֽ��ϴ�.\n"); Sleep(300);
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

void menu() {
	srand((unsigned int)time(NULL));
	int x;
	printf("\n���ϴ� �޴��� �����ϰ� ���ڸ� �Է��ϼ���.\n");
	printf("1. ������ �� Ȯ��\n");
	printf("2. ��ȭ�ϱ�\n");
	printf("3. ��������\n");
	printf("\n����>>> ");
	scanf_s("%d", &x);
}


int main(void) {
	//title();
	//How_to_play();
	SNAIL snail_arr[5] = { {1,0},{2,0},{3,0}, {4,0}, {5,0} };
	int x;
while(1) {
	
	system("cls");
	printf("\n���ϴ� �޴��� �����ϰ� ���ڸ� �Է��ϼ���.\n");
	printf("\n<1>   ������ �� Ȯ��\n");
	printf("\n<2>   1���� ������ ����\n");
	printf("\n<3>   ��ȭ�ϱ�\n");
	printf("\n<4>   ������Ʋ\n");
	printf("\n\n����>>> ");
	scanf_s("%d", &x);
	
	if (x == 1) {
		system("cls");
		for (int i = 0; i < 5; i++) {
			print_snail_info(snail_arr[i]);
		}
		printf("\n\n3�� �Ŀ� �޴��� ���ư��ϴ�.");
		Sleep(3000);
	}
    
	else if (x == 2) {  //�����̻����޴�
		int snail_count;
		system("cls");
		printf("1.  1���� ����(1�� �ҿ�)\n");
		printf("\n2.  5���� ����(5�� �ҿ�)\n");
		printf("\n3. 10���� ����(10�� �ҿ�)\n");
		printf("\n\n����� �����̸� ������ ������ ������.");
		scanf_s("%d", &snail_count);
		
		if (snail_count == 1) {
			system("cls");
			printf("1�� �Ŀ� �����̰� �߰��˴ϴ�.");
			snail_arr[0].count++;
			Sleep(1000);
		}

		else if (snail_count == 2) {
			system("cls");
			printf("5�� �Ŀ� �����̰� �߰��˴ϴ�.");
			snail_arr[0].count += 5;
			Sleep(5000);
		}

		else if (snail_count == 3) {
			system("cls");
			printf("10�� �Ŀ� �����̰� �߰��˴ϴ�.");
			snail_arr[0].count += 10;
			Sleep(10000);
		}

		else if (snail_count > 3) {
			system("cls");
			printf("�߸��� �Է°��Դϴ�.\n");
			printf("�޴��� ���ư��ϴ�.\n");
			Sleep(1000);
		}
	}

	else if (x == 3) {  //��ȭ�޴�
		system("cls");
		int select_level;
		printf("1. <1����> (Ȯ��: 70%%)\n");
		printf("\n2. <2����> (Ȯ��: 50%%)\n");
		printf("\n3. <3����> (Ȯ��: 40%%)\n");
		printf("\n4. <4����> (Ȯ��: 30%%)\n");
		printf("\n\n��ȭ�� ������ �����ϼ���.(��ȣ �Է�)>> ");
		scanf_s("%d", &select_level);

		if (select_level == 1) {
			if (snail_arr[0].count < 2) {
				system("cls");
				printf("�ռ��� �����̰� �����մϴ�.\n");
				printf("1�� �Ŀ� �޴��� ���ư��ϴ�.\n");
				Sleep(1000);
			}

			else {
				system("cls");
				snail_arr[0].count -= 2;
				if (rand() % 100 < 70) {
					snail_arr[1].count++;
					printf("�ڰ�ȭ ������");
				}
				else
					printf("��ȭ ����....");
				Sleep(1400);
			}
		}

		if (select_level == 2) {
			if (snail_arr[1].count < 2) {
				system("cls");
				printf("�ռ��� �����̰� �����մϴ�.\n");
				printf("1�� �Ŀ� �޴��� ���ư��ϴ�.\n");
				Sleep(1000);
			}

			else {
				system("cls");
				snail_arr[1].count -= 2;
				if (rand() % 100 < 50) {
					snail_arr[2].count++;
					printf("�ڰ�ȭ ������");
				}
				else
					printf("��ȭ ����....");
				Sleep(1400);
			}
		}

		if (select_level == 3) {
			if (snail_arr[2].count < 2) {
				system("cls");
				printf("�ռ��� �����̰� �����մϴ�.\n");
				printf("1�� �Ŀ� �޴��� ���ư��ϴ�.\n");
				Sleep(1000);
			}

			else {
				system("cls");
				snail_arr[2].count -= 2;
				if (rand() % 100 < 40) {
					snail_arr[3].count++;
					printf("�ڰ�ȭ ������");
				}
				else
					printf("��ȭ ����....");
				Sleep(1400);
			}
		}

		if (select_level == 4) {
			if (snail_arr[3].count < 2) {
				system("cls");
				printf("�ռ��� �����̰� �����մϴ�.\n");
				printf("1�� �Ŀ� �޴��� ���ư��ϴ�.\n");
				Sleep(1000);
			}

			else {
				system("cls");
				snail_arr[3].count -= 2;
				if (rand() % 100 < 30) {
					snail_arr[4].count++;
					printf("�ڰ�ȭ ������");
				}
				else
					printf("��ȭ ����....");
				Sleep(1400);
			}
		}
		
		
		else if (select_level > 4) {
			system("cls");
			printf("�߸��� �Է°��Դϴ�.\n");
			printf("�޴��� ���ư��ϴ�.\n");
			Sleep(1000);
		}
	}



}
    
	

}

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
	printf(" %d���� ������ : %d��\n\n", snail.level, snail.count);
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
	printf("����� �޴����� �����̸� ������ �� �ֽ��ϴ�.\n"); Sleep(300);
	printf("(Enter�� ������ ���)\n");
	getchar();
	printf("���� ����� �����̸� �ռ��Ͽ� ���� ������� ��ȭ��Ű����.\n"); Sleep(300);
	printf("(Enter�� ������ ���)\n");
	getchar();
	printf("�����̸� ��ȭ���Ѽ� ������Ʋ�� �����ϼ���.\n"); Sleep(300);
	printf("(Enter�� ������ ���)\n");
	getchar();
	printf("�ְ��� �����̸� ���� ������ ������ ����ġ����.\n"); 
	printf("(Enter�� ������ ������ �����ϼ���.)\n");
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
		printf("\n<1>   ������ �� Ȯ��\n");
		printf("\n<2>   ������ ����\n");
		printf("\n<3>   ������ ��ȭ\n");
		printf("\n<4>   ������Ʋ\n");
		printf("\n-----------------------------\n");
		printf("\n\n���ϴ� �޴��� �����ϼ��� >> ");
		scanf_s("%d", &x);

		if (x == 1) {
			system("cls");
			printf("\n");
			for (int i = 0; i < 5; i++) {
				print_snail_info(snail_arr[i]);
			}
			printf("\n\n����Ű�� ���� �޴��� ���ư�����.\n");
			getchar();
			getchar();
		}

		else if (x == 2) {  //�����̻����޴�
			int snail_count;
			system("cls");
			printf("\n-------------------------------------------------------------\n");
			printf("\n1. 1���� ������ x 1  (1�� �ҿ�)\n");
			printf("\n2. 1���� ������ x 5  (5�� �ҿ�)\n");
			printf("\n3. 2���� ������ x 5  (5�� �ҿ�) (1�ܰ� ���� Ŭ���� ���� ����)\n");
			printf("\n4. 3���� ������ x 5  (5�� �ҿ�) (2�ܰ� ���� Ŭ���� ���� ����)\n");
			printf("\n-------------------------------------------------------------\n");
			printf("\n\n����� �����̸� ������ ������ ������ >> ");
			scanf_s("%d", &snail_count);

			if (snail_count == 1) {
				system("cls");
				printf("1�� �Ŀ� �����̰� �߰��˴ϴ�.");
				snail_arr[0].count++;
				Sleep(1000);
			}

			else if (snail_count == 2) {
				system("cls");
				snail_arr[0].count += 5;
				for (int i = 5; i > 0; i--) {
					printf("%d�� �Ŀ� �����̰� �߰��˴ϴ�.", i);
					Sleep(1000);
					system("cls");
				}
			}

			else if (snail_count == 3 and boss_clear == 1) {
				system("cls");
				snail_arr[1].count += 5;
				for (int i = 5; i > 0; i--) {
					printf("%d�� �Ŀ� �����̰� �߰��˴ϴ�.", i);
					Sleep(1000);
					system("cls");
				}
			}
			else if (snail_count == 3 and boss_clear < 1) {
				system("cls");
				printf("���� ����� �� ���� �ý����Դϴ�.");
				Sleep(1000);
			}

			else if (snail_count == 4 and boss_clear == 2) {
				system("cls");
				snail_arr[2].count += 5;
				for (int i = 5; i > 0; i--) {
					printf("%d�� �Ŀ� �����̰� �߰��˴ϴ�.", i);
					Sleep(1000);
					system("cls");
				}
			}
			else if (snail_count == 4 and boss_clear < 2) {
				system("cls");
				printf("���� ����� �� ���� �ý����Դϴ�.");
				Sleep(1000);
			}


			else if (snail_count > 4) {
				system("cls");
				printf("�߸��� �Է°��Դϴ�.\n");
				printf("�޴��� ���ư��ϴ�.\n");
				Sleep(1000);
			}
		}

		else if (x == 3) {  //��ȭ�޴�
			system("cls");
			int select_level;
			printf("\n-------------------------------\n");
			printf("\n1. <1���� + 1����> (Ȯ��: 70%%)\n");
			printf("\n2. <2���� + 2����> (Ȯ��: 50%%)\n");
			printf("\n3. <3���� + 3����> (Ȯ��: 40%%)\n");
			printf("\n4. <4���� + 4����> (Ȯ��: 30%%)\n");
			printf("\n-------------------------------\n");
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
					Sleep(1000);
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
					Sleep(1000);
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
					Sleep(1000);
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
					Sleep(1000);
				}
			}


			else if (select_level > 4) {
				system("cls");
				printf("�߸��� �Է°��Դϴ�.\n");
				printf("�޴��� ���ư��ϴ�.\n");
				Sleep(1000);
			}
		}

		else if (x == 4) {
			if (boss_clear == 1) {
				system("cls");
				printf("ù ��°�� ����� ������ ���� �п��̴�.\n");
				printf("(����Ű�� ������ ���)\n");
				getchar(); getchar();
				printf("#$&%#)(*&$$*&#!!!!\n");
				printf("(����Ű�� ������ ���)\n");
				getchar();
				printf("�������� �����ġ��� �п��� ���� ���������ȴ�.\n");
				printf("(����Ű�� ������ ���)\n");
				getchar();
				system("cls");
				printf("��1�ܰ� ���� óġ ����!��\n");
				printf("���� : 2���� ������ 10����\n");
				printf("\n\n(3�� �Ŀ� �޴��� ���ư��ϴ�.)\n");
				Sleep(3000);
				snail_arr[1].count += 10;
				boss_clear++;
			}

			else if (snail_arr[3].count >= 1 or snail_arr[4].count and boss_clear == 2) {
				system("cls");
				printf("�� ��°�� ����� ������ ������.\n");
				printf("(����Ű�� ������ ���)\n");
				getchar(); getchar();
				printf("�����̰� �����ġ�⸦ ���������� ������ �ϴ÷� ���ư����ȴ�.\n");
				printf("(����Ű�� ������ ���)\n");
				getchar();
				printf("�ٽ� ������ ������ ������ �����̸� �ɷ��� �Ѵ�.\n");
				printf("(����Ű�� ������ ���)\n");
				getchar();
				printf("�������� �ܴ�������!!!\n");
				printf("(����Ű�� ������ ���)\n");
				getchar();
				printf("�ܴ��� ���� ���п� ������ �θ��� �η�����.\n");
				printf("(����Ű�� ������ ���)\n");
				getchar();
				system("cls");
				printf("��2�ܰ� ���� óġ ����!��\n");
				printf("���� : 3���� ������ 20����\n");
				printf("\n\n(3�� �Ŀ� �޴��� ���ư��ϴ�.)\n");
				Sleep(3000);
				snail_arr[2].count += 20;
				boss_clear++;
			}

			else if (snail_arr[4].count >= 1 and boss_clear == 3) {
				system("cls");
				printf("���������� ����� ������ �����ڴ�.\n");
				printf("(����Ű�� ������ ���)\n");
				getchar(); getchar();
				printf("����� �����ڸ� ����ϱ� ���ؼ� 5������ �����̸� �������ȴ�.\n");
				printf("(����Ű�� ������ ���)\n");
				getchar();
				printf("�����ڴ� ����� ���� �������� ����� ����Ͽ� ��������.\n");
				printf("(����Ű�� ������ ���)\n");
				getchar();
				printf("����������⿣ �ʹ� �㹫�ϰ� �����ƴ�.\n");
				printf("(����Ű�� ������ ���)\n");
				getchar();
				system("cls");
				printf("���������� óġ ����!��\n");
				printf("(����Ű�� ������ ���)\n");
				getchar();
				system("cls");
				printf("���� ���� ������ ���⼭ ���� �����ϴ�.\n");
				printf("(����Ű�� ������ ���)\n");
				getchar();
				printf("������ �÷������ּż� �����մϴ�.\n");
				printf("(����Ű�� ������ ���)\n");
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
				printf("���� ���� ������ ����ϱ⿣ ���� �����ϴ�.\n\n");
				printf("�� ���� ������ �����̸� ������ ����.....\n\n");
				printf("(����Ű�� ������ ���)\n");
				getchar(); getchar();
			}

		}

	}
}



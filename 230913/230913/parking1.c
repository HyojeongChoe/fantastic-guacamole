#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int select_menu();

int main()
{
	//�� ���� Ʋ�� ®��� ������ ÷���� �����������Կ�? ��
	while (1) {
		int num;

		printf("������ȣ ���ڸ��� �Է��ϼ���\n");
		printf("������ȣ: ");
		scanf("%d", &num);

		printf("=================================\n");
		printf("        ���� ��ȣ ����\n");
		printf("=================================\n");
		printf("\n");
		printf("������ ������ȣ�� �½��ϱ�? \n");
		printf("\n");
		printf("%d\n", num);
		printf("\n");
		printf("1. ��			2. �ƴϿ�\n");
		printf("\n");
		printf("\n");

		int menu;
		scanf("%d", &menu);
		printf("\n");

		if (menu == 1) {
			//1���� ������ �̿�ð��� ���, ����ȭ���� ���;���
			//while�� ���� ������
			break;
		}
		//2�� ������ ���Է� �ϴ� ȭ�� ����
		else if (menu == 2) {

		}
	}
	printf("�����ð�: \n");
	printf("�����ð�: \n");
	printf("�̿�ð�: \n");
	printf("���: \n");
}
	

int select_menu() {
	
	/*int num;

	printf("������ȣ: ");
	scanf("%d", &num);*/

}


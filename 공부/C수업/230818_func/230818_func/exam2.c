#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void show_day(int n);
int main()
{
	int day = 0;
	printf("1���� 7 ������ ���ڸ� �Է��ϼ���. \n");
	printf("�Է�: ");
	scanf("%d", &day);
	show_day(day);		//�Լ� ȣ��
}

// main()���� 1~7������ ���ڸ� �Է¹޾Ƽ�
// �Ű������� ���� 1�̸� ������ ���...�Ͽ��� ���
// show_day()

void show_day(int n)
{
	switch (n) {
	case 1:
		printf("������"); break;
	case 2:
		printf("ȭ����"); break;
	case 3:
		printf("������"); break;
	case 4:
		printf("�����"); break;
	case 5:
		printf("�ݿ���"); break;
	case 6:
		printf("�����"); break;
	case 7:
		printf("�Ͽ���"); break;
	}
	
	/*if (n == 1) {
		printf("������\n");
	}
	else if (n == 2) {
		printf("ȭ����\n");
	}
	else if (n == 3) {
		printf("������\n");
	}
	else if (n == 4) {
		printf("�����\n");
	}
	else if (n == 5) {
		printf("�ݿ���\n");
	}
	else if (n == 6) {
		printf("�����\n");
	}
	else if (n == 7) {
		printf("�Ͽ���\n");
	}*/
}
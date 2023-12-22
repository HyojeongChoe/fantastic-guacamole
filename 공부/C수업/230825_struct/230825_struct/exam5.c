#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

//��������
char* name[5] = { "��ȿ��","�ֱ���","������","������","�ֹ���" };
char* model[5] = { "�׷���","����","�ƹݶ�","K5","K9" };
char* ma_name[4] = { "������","���پ�","���Ѻ�","�迹��" };
	//���̸�, ������, �Ŵ�����
	//------------------------------
	//	�� �������� ���α׷� v1.6
	//------------------------------
	// 1. ������ ���� �Է�
	// 2. ������ ���� �Է�
	// 3. ������ ����
	// 4. ����
	//------------------------------
	// ����: 
struct car {
	char model[20];
};
struct manager {
	char ma_name[20];
};
struct customer {
	char name[20];	
	struct car ca;
	struct manager ma;
};

int show_menu();
void ran_input(struct customer data[]);		//�����Է�
void ran_output(struct customer data[]);	//����ȣ��
void input_cus(struct customer data[]);		//�����Է�

int main()
{
	struct customer data[10] = { 0 };	//����ü���� �迭����
	
	srand(time(NULL));
	while (1) {
		system("cls");
		int num = show_menu();
		switch (num) {

		case 1:
			input_cus(data);
			break;
		case 2:
			ran_input(data);
			break;
		case 3:
			ran_output(data);
			break;
		case 4:
			printf("���α׷� ����");
			exit(0);
		default:
			printf("Error!!!!\n");
		}
		system("pause");
	}
}
int show_menu()
{
	printf("------------------------------\n");
	printf("�� �������� ���α׷� v1.6\n");
	printf("------------------------------\n");
	printf("1.������ ���� �Է�\n");
	printf("2.������ ���� �Է�\n");
	printf("3.������ ����\n");
	printf("4.����\n");
	printf("------------------------------\n");
	printf("����: ");
	int num;	//�Է¹��� ��ȣ
	scanf("%d", &num);
	return num;
}
void input_cus(struct customer data[])
{
	memset(data, 0, sizeof(data)*10);
	printf("------------------------------\n");	//������
	printf("�� �������� ���α׷� v1.6\n");
	printf("------------------------------\n");
	printf("�̸�: ");
	scanf("%s", data[0].name);
	printf("������: ");
	scanf("%s", data[0].ca.model);
	printf("�Ŵ���: ");
	scanf("%s", data[0].ma.ma_name);
	printf("�������� �������� �ԷµǾ����ϴ�.\n");
}

void ran_input(struct customer data[])
{
	for (int i = 0; i < 10; i++) {
		strcpy(data[i].name, name[(rand())%5]);
		strcpy(data[i].ca.model, model[(rand()) % 5]);
		strcpy(data[i].ma.ma_name, ma_name[(rand()) % 4]);
	}
	printf("�������� �������� �ԷµǾ����ϴ�.");
	printf("\n");
}
void ran_output(struct customer data[])	
{
	for (int i = 0; i < 10; i++) {
		// data[i].name�� ���� ""�� ���ٸ�
		// ��, �������� ������ Ż����
		if (strcmp(data[i].name, "") == 0)
		{
			break;
		}
		else {
			printf("------------------------------\n");	//������
			printf("�� �������� ���α׷� v1.6\n");
			printf("------------------------------\n");
			printf("�̸�: %s\n", data[i].name);
			printf("������ :%s\n", data[i].ca.model);		//�ϳ��ϳ� �����̸� �ٲٱ� �����Ƽ� �� data�� ��.
			printf("�Ŵ���: %s\n", data[i].ma.ma_name);
		}
	}
	printf("\n");
}
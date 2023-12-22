#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//��������
const char* name[4] = { "������","���پ�","�迹��","���Ѻ�" };
const int age[4] = { 10,15,20,25 };
const char* tel[4] = { "010-1234-5678","010-5676-3218","010-9876-2341","010-7856-2105" };
const char* addr[4] = { "�뱸�� ����","�뱸�� �߱�","�뱸�� �ϱ�","�뱸�� ����" };

typedef struct _SON {
	char name[20];
	int age;
	char tel[20];
	char addr[20];
} SON;

int menu();
void write();
void read();

int main()
{
	while (1) {
		system("cls");
		switch (menu()) {
		case 1:
			write();
			break;
		case 2:
			read();
			break;
		case 3:
			printf("����");
			exit(0);
		default:
			printf("Error!!!!");
			break;
		}
		system("pause");
	}
}

int menu()
{
	printf("-------------------------------\n");
	printf("���� ���� ���α׷� v1.0\n");
	printf("-------------------------------\n");
	printf("1.������ ������ �����Է�\n");
	printf("2.���Ͽ��� �о����\n");
	printf("3.����\n");
	printf("-------------------------------\n");
	printf("����: ");
	int num;
	scanf("%d", &num);
	return num;
}
void write()
{
	SON son_write[10] = { 0 };
	FILE* fp = fopen("person_exam_2.bin", "wb");
	for (int i = 0; i < 10; i++) {
		if (fp == NULL) {
			printf("���� �б� ����!!!");
			return -1;
		}
		else if (fp != NULL)
		{
			strcpy(son_write[i].name, name[rand() % 4]);
			son_write[i].age = age[rand() % 4];
			strcpy(son_write[i].tel, tel[rand() % 4]);
			strcpy(son_write[i].addr, addr[rand() % 4]);
			fwrite(&son_write[i], sizeof(son_write[i]), 1, fp);
		}
	}
	fclose(fp);
}
void read()
{
	//���������� ����ü 1���� �о��ٸ�
	SON read = { 0 };
	FILE* fp3 = fopen("person_exam_2.bin", "rb");
	while (fread(&read, sizeof(read), 1, fp3) == 1)		//sizeof �ȿ� ����ü ��(PERSON)
	{
		printf("----------------------------\n");
		printf("�̸�:%s\n", read.name);
		printf("����:%d\n", read.age);
		printf("��ȭ:%s\n", read.tel);
		printf("�ּ�:%s\n", read.addr);
		printf("\n");
	}
	fclose(fp3);
}
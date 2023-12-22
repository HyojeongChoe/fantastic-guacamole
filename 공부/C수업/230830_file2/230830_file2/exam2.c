#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//������ ��: const -> �������
const char* name[4] = { "ȫ�浿","����ġ","������","������" };
const int age[4] = { 10,20,30,40 };
const char* tel[4] = { "010-1234-5678","010-5676-3218","010-9876-2341","010-7856-2105" };
const char* addr[4] = { "�뱸�� ����","�뱸�� �߱�","�뱸�� �ϱ�","�뱸�� ����" };

typedef struct _PERSON {
	char name[20];
	int age;
	char tel[20];
	char addr[20];
} PERSON;

int menu();
void write_per();
void read_per();
int main()
{
	

	while (1) {
		switch (menu())
		{
		case 1:
			write_per();
			break;
		case 2:
			read_per();
			break;
		case 3:
			printf("����");
			exit(0);
		default:
			printf("Error!!!!");
			break;
		}
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
void write_per()
{
	PERSON son[100] = { 0 };
	FILE* fp = fopen("person_exam_.bin", "wb");
	for (int i = 0; i < 10; i++)
	{
		if (fp == NULL) {
			printf("���� ���� ����!!!");
			return -1;
		}
		else {
			strcpy(son[i].name, name[rand() % 4]);
			son[i].age = age[rand() % 4];
			strcpy(son[i].tel, tel[rand() % 4]);
			strcpy(son[i].addr, addr[rand() % 4]);
			fwrite(&son[i], sizeof(son[i]), 1, fp);
		}
	}
	fclose(fp);
	printf("������ ���������� ����Ǿ����ϴ�.\n");
}

void read_per()
{
	PERSON son_read = { 0 };
	FILE* fp2 = fopen("person_exam_.bin", "rb");
	while (fread(&son_read, sizeof(son_read), 1, fp2) == 1)		//sizeof �ȿ� ����ü ��(PERSON)
	{
		if (fp2 == NULL) {
			printf("���� �б� ����!!");
			return -1;
		}
		{
			printf("-----------------------------------------------------------\n");
			printf("�̸�:%s ����:%d ��ȭ:%s �ּ�:%s\n", son_read.name, son_read.age, son_read.tel, son_read.addr);
			printf("\n");
		}
	}
	fclose(fp2);
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

const int id[5] = { 111,222,333,444,555 };	
const char* name[5] = { "������","���ֿ�","������","�ڼ���","�����" };
const char* tel[5] = { "010-6339-2099","010-3517-1541","010-9776-1544","010-7205-4830","010-4005-8742" };
const char* addr[5] = { "�뱸������ ���� ���̵�","�λ걤���� ���� �ʷ���","��걤���� �߱� ������","�뱸������ �߱� ���ε�","�뱸������ ������ ȿ�ɸ�" };
const char* email[5] = { "gywjd1544@naver.com","sdf1544@naver.com","tvxq202@gmail.com","bbs8@hanmail.net","love486@gmail.com" };

typedef struct _ADDR {
	int id;	//������ ����..
	char name[20];
	char tel[20];
	char addr[30];
	char email[50];
}ADDR;

int menu();
void ran_write(char filename[]);
void write(char filename[]);
void delete(char filename[]);
void read(char filename[]);
int main()
{
	char filename[] = "address.bin";	//���ϸ���
	srand(time(NULL));	//�� ���� �Է�
	
	while (1) {
		int num = menu();	//num �� ��ȯ
		switch (num)
		{
		case 1:
			ran_write(filename);
			break;
		case 2:
			write(filename);
			break;
		case 3:
			delete(filename);
			break;
		case 4:
			read(filename);
			break;
		case 5:
			printf("���α׷� ����");
			exit(0);
		default:
			printf("Error!!!\n");
			break;
		}
	}
}

//�޴����� �Լ�
int menu()
{
	printf("===========================\n");
	printf("�ּҷ� ���� ���α׷� v1.0\n");
	printf("===========================\n");
	printf("1.�ּҷ� �ڵ� ����\n");
	printf("2.�ּҷ� ���� �Է�\n");
	printf("3.�ּҷ� ��ü ����\n");
	printf("4.�ּҷ� ����\n");
	printf("5.����\n");
	printf("---------------------------\n");
	printf("����: ");
	int num;
	scanf("%d", &num);
	return num;
}
//�ּҷ� �ڵ� �Է� �Լ�
void ran_write(char filename[])
{
	ADDR per[10] = { 0 };	//���� ������ �迭���� 
	FILE* fp = fopen(filename, "ab");	//���Ͽ���
	for (int i = 0; i < 10; i++)
	{
		if (fp == NULL) {
			printf("���� ���� ����!!!\n");
			return -1;
		}
		else {
			per[i].id = id[rand() % 5];
			strcpy(per[i].name, name[rand() % 5]);
			strcpy(per[i].tel, tel[rand() % 5]);
			strcpy(per[i].addr, addr[rand() % 5]);
			strcpy(per[i].email, email[rand() % 5]);
			fwrite(&per[i], sizeof(per[i]), 1, fp);
		}
	}
	fclose(fp);
	printf("������ �������� �ԷµǾ����ϴ�.\n");
}
//�ּҷ� �����Է� �Լ�
void write(char filename[])
{
	ADDR per[10] = {0};
	FILE* fp = fopen(filename, "ab");
	if (fp == NULL) {
		printf("���� ���� ����!!!\n");
		return -1;
	}
	else {
		printf("ID: ");
		scanf("%d", &per[0].id);
		printf("�̸�: ");
		scanf("%s", per[0].name);
		printf("����ó: ");
		scanf("%s", per[0].tel);
		printf("�ּ�: ");
		getchar();
		gets(per[0].addr);
		printf("�̸���: ");
		scanf("%s", per[0].email);
		fwrite(&per[0], sizeof(per[0]), 1, fp);
	}
	fclose(fp);
	printf("������ ���������� �ԷµǾ����ϴ�.\n");
}
//�ּҷ� ���� �Լ�
void delete(char filename[])
{
	FILE* fp = fopen(filename, "wb");
	fclose(fp);
	printf("��ü������ �����Ǿ����ϴ�.\n");
}
//�ּҷ� �б� �Լ�
void read(char filename[])
{
	FILE* fp = fopen(filename, "rb");
	ADDR temp = { 0 };
	if (fp == NULL) {
		printf("���� �б� ����!!!!\n");
		return -1;
	}
	else{
		while (fread(&temp, sizeof(temp), 1, fp) == 1) {
			printf("-------------------------------\n");
			printf("ID: %d\n", temp.id);
			printf("�̸�: %s\n", temp.name);
			printf("����ó: %s\n", temp.tel);
			printf("�ּ�: %s\n", temp.addr);
			printf("�̸���: %s\n", temp.email);
			printf("\n");
		}
	}
	fclose(fp);
}


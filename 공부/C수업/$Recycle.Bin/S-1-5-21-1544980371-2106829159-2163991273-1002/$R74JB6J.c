#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


typedef struct fren
{
	char name[10];
	char sex[10];
	int age;
}Friend;

int menu();
void write(Friend myfren1);
void read();
int main()
{/*
	FILE* fp;
	Friend myfren1;
	Friend myfren2;*/

	while (1) {
		int num = menu();
		switch (num)
		{
		case 1:
		{
			Friend myfren1 = { 0 };
			printf("�̸�: ");
			scanf("%s", myfren1.name);
			printf("����: ");
			scanf("%s", myfren1.sex);
			printf("����: ");
			scanf("%d", &myfren1.age);
			write(myfren1);
			break;
		}
			break;
		case 2:
			read();
			break;
		case 3:
			printf("����\n");
			exit(0);
		default:
			printf("Error!!!\n");
		}
	}
}

int menu()
{
	printf("---------------------------\n");
	printf("���� ���� ���α׷� v1.0\n");
	printf("---------------------------\n");
	printf("1.ģ�� ���� ���� \n");
	printf("2.ģ�� ���� �б� \n");
	printf("3.���� \n");
	printf("---------------------------\n");
	printf("�޴� ����: \n");
	int num;
	scanf("%d", &num);
	return num;
}

void write(Friend myfren1)
{
	//���Ͼ���
	FILE* fp = fopen("friend2.bin", "wb");
	fwrite(&myfren1, sizeof(myfren1), 1, fp);
	fclose(fp);
}
void read()
{
	//�����б�
	FILE* fp;
	Friend myfren2;
	fp = fopen("friend2.bin", "rb");
	fread(&myfren2, sizeof(myfren2), 1, fp);
	printf("%s\n", myfren2.name);
	printf("%s\n", myfren2.sex);
	printf("%d\n", myfren2.age);
	fclose(fp);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//����: ���Ͽ� ������ �� ���� �����Ͱ� ��� �����ؾߵ�

//if (strcmp(data[i].name, "") == 0) {break;}

//�������
const char* name[5] = { "��ȿ��","������","���پ�","���Ѻ�","�迹��" };
const char* tel[5] = { "010-5672-8123","010-7862-1058","010-6339-2099","010-4832-0578","010-8848-1071" };
const char* addr[5] = { "�뱸������ ����","�뱸������ �߱�","�뱸������ ����","�뱸������ ����","�뱸������ ������" };
const char* model[5] = { "����","�ƹݶ�","�׷���","k7","���׽ý�g80" };
const char* price[5] = { "��õ����","��õ����","��õ����","��õ����","��õ����" };
const int year[5] = { 1,2,3,4,5 };

typedef struct _CAR {	//�ڵ��� ����
	char model[20];
	char price[20];
	int year;
}CAR;

typedef struct _CUST {	//�� ����
	char name[20];
	char tel[20];
	char addr[20];
	CAR ca;
}CUST;


int menu();
void write(CUST data[],char filename[]);		//�����Է��Լ�
void ran_write(CUST data[],char filename[]);	//�����Է��Լ�
void read(char filename[]);		//�б�
void del(char filename[]);		//����
int main()
{
	char filename[] = "person_car.bin";	//�����̸��迭 ����
	CUST data[10] = { 0 };	//�Է°��� ���� ���� ����
	
	srand(time(NULL));		//���� ����
	
	while (1) {
		int num = menu();
		system("cls");
		switch (num) {
		case 1:
			write(data, filename);
			break;
		case 2:
			ran_write(data, filename);
			break;
		case 3:
			read(filename);
			break;
		case 4:
			del(filename);
			break;
		default:
			printf("Error!!!\n");
			exit(0);
		}
		system("pause");
	}
}
	

int menu()
{
	printf("============================\n");
	printf("�� ���� ���� ���α׷�v2.0\n");
	printf("============================\n");
	printf("1.�� ���� ���� �Է�\n");
	printf("2.�� ���� ���� �Է�\n");
	printf("3.�� ���� ����\n");
	printf("4.�� ���� ��ü ����\n");
	printf("----------------------------\n");
	printf("����: ");
	int num;
	scanf("%d", &num);
	return num;
}
void write(CUST data[],char filename[])
{
	FILE* fp = fopen(filename, "ab");
	if (fp == NULL) {
		printf("���� ���� ����!!\n");
		return -1;
	}
	else {
		printf("�� �̸�: ");
		scanf("%s", data[0].name);
		printf("�� ����ó: ");
		scanf("%s", data[0].tel);
		printf("�� �ּ�: ");
		getchar();	//gets���� �ʼ� ���ʿ� �Է�
		gets(data[0].addr);	//������� �Է¹ޱ����� gets���
		printf("������: ");
		scanf("%s", data[0].ca.model);
		printf("����: ");
		scanf("%s", data[0].ca.price);
		printf("����: ");
		scanf("%", &data[0].ca.year);
		fwrite(&data[0], sizeof(data[0]), 1, fp);
	}
	fclose(fp);
	printf("������ ���������� �ԷµǾ����ϴ�\n");
}
void ran_write(CUST data[], char filename[])
{
	FILE* fp = fopen(filename, "ab");
	if (fp == NULL) {
		printf("���� ���� ����!!\n");
		return -1;
	}
	else {
		for (int i = 0; i < 10; i++) {
			strcpy(data[i].name, name[rand() % 5]);
			strcpy(data[i].tel, tel[rand() % 5]);
			strcpy(data[i].addr, addr[rand() % 5]);
			strcpy(data[i].ca.model, model[rand() % 5]);
			strcpy(data[i].ca.price, price[rand() % 5]);
			data[i].ca.year= year[rand() % 5];
			fwrite(&data[i], sizeof(data[i]), 1, fp);
		}
	}
	fclose(fp);
	printf("������ ���������� �ԷµǾ����ϴ�.\n");
}
void read(char filename[])
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("���� �б� ����!!!\n");
		return -1;
	}
	else {
		CUST temp = { 0 };
		while (fread(&temp, sizeof(temp), 1, fp) == 1) {
		/*	if (strcmp(temp.name, "") == 0) {
				break; 
			}*/
			printf("----------------------------\n");
			printf("�̸�: %s\n", temp.name);
			printf("����ó: %s\n", temp.addr);
			printf("����: %s\n", temp.ca.model);
			printf("����: %s\n", temp.ca.price);
			printf("����: %d\n", temp.ca.year);
			printf("\n");
		}
	}
	fclose(fp);
}
void del(char filename[])
{
	FILE* fp = fopen(filename, "wb");
	fclose(fp);
	printf("���� ���� �Ϸ�!!\n");
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

	//���������� ���α׷�1.0
	//��&�� ����ü
	//��: �̸�, ��ȭ��ȣ, �ּ�, ����, ����
	//����: �𵨸�, ����, ����, ����, ������
	//10���� �������� �迭���� �����ϰ� �����Ͽ� �Է� �� ���
struct car {
	char model[20];
	int price;
	int year;
	char color[20];
	char office[20];
};

struct customer {
	char name[20];
	char tel[20];
	char addr[20];
	char job[20];
	char month_of_birth[20];
	struct car ca;	//��������
};

int main()
{
	struct customer data[10];	//������ ������ ���� �迭 ����
	
	srand(time(NULL));		//�����ϰ� ����
	char* name[5] = {"����ȯ","������","���ڿ�","���ϼ�","������"};
	char* tel[5] = { "010-1234-5678","010-3753-2189","010-7865-1235","010-9524-4155","010-2435-4568" };
	char* addr[8] = {"�뱸�� ����","�뱸�� ����","�뱸�� �߱�","�뱸�� �ϱ�",
		"�뱸�� ����","�뱸�� �޼���","�뱸�� �޼���", "�뱸�� ������" };
	char* job[5] = {"�߱�����","������","�����","����","ȸ���" };
	char* birth[12] = { "1��","2��","3��","4��","5��","6��","7��","8��","9��","10��","11��","12��" };
	char* model[5] = { "�׷���","����","�ƹݶ�","K5","K9" };
	int price[5] = { 2500, 3500, 5000, 7000, 9000 };
	int year[3] = { 2021, 2022, 2023 };
	char* color[4] = { "���","������","ȸ��","������" };
	char* office[4] = { "���뱸������","���뱸������","�ϴ뱸������","�뱸����" };
	
	//�Է�
	for (int i = 0; i < 10; i++)
	{
		strcpy(data[i].name, name[(rand() % 5)]);
		strcpy(data[i].tel, tel[(rand() % 5)]);
		strcpy(data[i].addr, addr[(rand() % 8)]);
		strcpy(data[i].job, job[(rand() % 5)]);
		strcpy(data[i].month_of_birth, birth[(rand() % 12)]);
		strcpy(data[i].ca.model, model[(rand() % 5)]);
		data[i].ca.price = price[(rand() % 5)];
		data[i].ca.year = year[(rand() % 3)];
		strcpy(data[i].ca.color, color[(rand() % 4)]);
		strcpy(data[i].ca.office, office[(rand() % 4)]);
	}

	//���
	for (int i = 0; i <10; i++)
	{
		printf("-------------------------------\n");	//������
		printf("���� ������ ���α׷� 1.0\n");
		printf("-------------------------------\n");
		printf("�̸�: %s\n", data[i].name);
		printf("����ó: %s\n", data[i].tel);
		printf("�ּ�: %s\n", data[i].addr);
		printf("����: %s\n", data[i].job);
		printf("�������� ����: %s\n", data[i].month_of_birth);
		printf("\n");
		printf("��: %s\n", data[i].ca.model);				//��������
		printf("����: %d����\n", data[i].ca.price);
		printf("����: %d��\n", data[i].ca.year);
		printf("����: %s\n", data[i].ca.color);
		printf("������: %s\n", data[i].ca.office);
	}
	printf("\n");
}
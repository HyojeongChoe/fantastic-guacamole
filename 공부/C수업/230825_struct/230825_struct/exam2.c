#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct professor		//������
{
	char name[20];
	char major[20];
	int age;
};
struct student			//�л���
{
	char name[20];
	char tel[20];
	int age;
	char addr[20];
	struct professor pro;
};

int main()
{
	//1. �л� ���� ����ü �����
	//2. �л� ������ �̸�, �޴�����ȣ, ����, �ּҰ� ����
	//3. 100���� �л� ������ �����ϰ� �����Ͽ� ���
	//4. �������� �迭�� ���� �����ϰ� �����ϰ� �ҷ����� ó��
	struct student st[100];
	srand(time(NULL));		//��� ��ȭ������

	//���ڿ��� �迭�� �����ϴ� �ڵ� char*
	char* name[5] = { "��ȿ��", "�迹��", "���پ�", "������", "���Ѻ�" };
	char* tel[5] = { "010-1234-5678","010-8652-4138","010-7856-1238", "010-9872-0548", "010-3874-6547" };
	int age[5] = { 20,25,30,35,40 };
	char* addr[5] = { "�뱸", "����", "�λ�", "��õ","����" };


	//�Է�
	for (int i = 0; i < 100; i++)
	{
		strcpy(st[i].name, name[rand() % 5]);	//�ڿ� �����ִ� ���� �������� ������ŭ
		strcpy(st[i].tel, tel[rand() % 5]);
		st[i].age = age[rand() % 5];
		strcpy(st[i].addr, addr[rand() % 5]);
	}
	//���
	for (int i = 0; i < 100; i++)
	{
		printf("%d��° �л� ����\n", i + 1);
		printf("\n");
		printf("�̸�: %s\n", st[i].name);
		printf("����ó: %s\n", st[i].tel);
		printf("����: %d\n", st[i].age);
		printf("�ּ�: %s\n", st[i].addr);
		printf("----------------------\n");
	}

	st[0].pro.age = 50;	//ù��° �л��� ��米���� ����
	strcpy(st[0].pro.name, "ȫ����");	//ù��°�л��� ��米���� �̸�
	printf("%s �л��� ��米��: %s\n", st[0].name, st[0].pro.name);
}
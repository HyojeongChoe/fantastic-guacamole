#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int menu();
int main()
{
	int num = menu();
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
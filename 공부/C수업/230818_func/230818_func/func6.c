#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void HowToUseThisProg();
int ReedNum();
void ShowAddResult(int num);
int Add(int num1, int num2);

int main()
{
	HowToUseThisProg();
	int num1 = ReedNum();
	int num2 = ReedNum();
	int result = Add(num1, num2);
	ShowAddResult(result);
}

void HowToUseThisProg()			//�Ű����� x ��ȯ�� x
{
	printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�. \n");
	printf("�� ���� ������ �Է��ϼ���. \n");
}
int ReedNum()					//�Ű����� x ��ȯ�� o
{
	int num;
	scanf("%d", &num);
	return num;
}
int Add(int num1, int num2)		//�Ű����� o ��ȯ�� o
{
	return num1 + num2;
}
void ShowAddResult(int num)		//�Ű����� o ��ȯ�� x
{
	printf("���� ��� ���: %d \n", num);
}


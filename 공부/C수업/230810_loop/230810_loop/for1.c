#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	for (int i = 0; i < 3; i++) //�ʱ⺯�� /�������� / ��������
	{
		printf("Hi~\n");
	}

	int j = 0;					//�ʱ� ����
	while (j < 3)				//������ �����̶�� ��������
	{
		printf("hi~\n");		//��¹�
		j++;			
	}

	int n = 0;
	do {
		printf("HI~\n");
		n++;
	} while (n < 3);


}
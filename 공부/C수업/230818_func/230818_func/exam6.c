#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>		//exit()

void sum(int n1, int n2, int n3);
void avg(int n1, int n2, int n3);

int main()
{
	int kor, math, eng;		//������ �����ϴ� ��������

	printf("��������: ");
	scanf("%d", &kor);
	if (kor < 0 || kor>100) 
	{
		printf("Error!");
		exit(0);
	}
	printf("��������: ");
	scanf("%d", &math);
	if (math < 0 || math>100)
	{
		printf("Error!");
		exit(0);		//���α׷� ��������
	}
	printf("��������: ");
	scanf("%d", &eng);
	if (eng < 0 || eng>100)
	{
		printf("Error!");
		exit(0);
	}
	sum(kor, math, eng);
	avg(kor, math, eng);
}

void sum(int n1, int n2, int n3)
{
	printf("����: %d\n", n1 + n2 + n3);
}

void avg(int n1, int n2, int n3)
{
	printf("���: %d\n", (n1 + n2 + n3) / 3);
}


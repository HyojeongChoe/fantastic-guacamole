#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//	//1���� ���ڸ� �Է¹޾� ������ ����ϴ� ���α׷�
	//	//��) 3�� �Է��ϸ� ������ 3�� ���

int main()
{
	printf("������ �Է�: ");

	int ggd;
	scanf("%d", &ggd);
	//printf("%d x %d = %d \n", ggd, 1, ggd * 1);			//�ݺ��� �Ƚ��� ���.
	//printf("%d x %d = %d \n", ggd, 1, ggd * 2);			//
	//printf("%d x %d = %d \n", ggd, 1, ggd * 3);
	//printf("%d x %d = %d \n", ggd, 1, ggd * 4);
	//printf("%d x %d = %d \n", ggd, 1, ggd * 5);
	//printf("%d x %d = %d \n", ggd, 1, ggd * 6);
	//printf("%d x %d = %d \n", ggd, 1, ggd * 7);
	//printf("%d x %d = %d \n", ggd, 1, ggd * 8);
	//printf("%d x %d = %d \n", ggd, 1, ggd * 9);
	//printf("\n");

	for (int i = 1; i < 10; i++)								//����� ���� �߿�
	{
		printf("%d x %d = %d \n", ggd, i , ggd* i);
	}
	printf("\n");

	for (int j = 1; j<10; j=j+2)		    //Ȧ���� ���
	{
		printf("%d x %d = %d \n", ggd, j, ggd * j);
	}
	printf("\n");

	for (int n = 2; n < 10; n = n + 2)		//¦���� ���
	{
		printf("%d x %d = %d \n", ggd, n, ggd * n);
	}
	printf("\n");


}
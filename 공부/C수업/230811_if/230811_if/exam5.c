#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//1. 3���� ���ڸ� �Է¹޾Ƽ� Ȧ��, ¦�� �����ϱ�
	//����) �ݺ����� ����ؼ� �Է¹ޱ�
		
	
	int i = 0;
	while (i < 3) {
		printf("�����Է�: ", i + 1);
		int n;
		scanf("%d", &n);
		

		if (n % 2 == 0) {
			printf("%d�� ¦��\n", n);
		}
		else {
			printf("%d�� Ȧ��\n", n);
		}i++;

	}

	/*	for (int i = 0; i < 3; i++) {
		printf("�����Է�: ", i + 1);
		int n;
		scanf("%d", &n);
		
		if (n % 2 == 0) {
			printf("%d�� ¦�� \n", n);
		}
		else {
			printf("%d�� Ȧ�� \n", n);
		}

	}*/
	//2. 1~100������ �����߿��� 5�ǹ���� ����ϱ�
	//����) �ݺ��� for, while ����ϱ� 

	/*for (int i = 1; i <= 100; i++) {
		if (i % 5 == 0) {
			printf("%d \n", i);
		}
	}
	printf("\n");
	int i=1;
	while (i <= 100) {
		if (i % 5 == 0) {
			printf("%d \n", i);

		}i++;
	}*/
}
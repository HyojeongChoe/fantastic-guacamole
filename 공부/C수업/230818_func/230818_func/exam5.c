#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ggd(int n);
int max(int n1, int n2, int n3);
int min(int n1, int n2, int n3);

int main()
{
	//1. �������� ����ϴ� ���ڸ� main()���� �Է¹���
	//2. ��) 3�� �Է¹޾� �Ű������� �����ϸ� 3�����
	//3. �Է¹��� ���ڸ� �Ű������� �����Ͽ� ������ ���
	int n;
	printf("����� ���� �Է��ϼ���.\n");
	printf("�Է�: ");
	scanf("%d", &n);
	ggd(n);			//�Լ� ȣ��

	//int n1, n2, n3;
	//printf("3���� ���ڸ� �Է¹�������.\n");
	//printf("�Է�: ");
	//scanf("%d", &n1);
	//printf("�Է�: ");
	//scanf("%d", &n2);
	//printf("�Է�: ");
	//scanf("%d", &n3);
	//int a = max(n1, n2, n3);
	//printf("�ִ�: %d \n", a);						//���� ȣ��
	//printf("�ּҰ�: %d \n", min(n1, n2, n3));		//�Լ� �ٷ� ȣ��
}


void ggd(int n)		//�Լ� ����
{
	for (int i = 1; i < 10; i++)
	{
		printf("%d x %d = %d \n", n, i, n * i);
	}
}

int max(int n1, int n2, int n3)
{
	//n1>n2>n3
	//n1>n3>n2
	//n2>n1>n3
	//n2>n3>n1
	//n3>n1>n2
	//n3>n2>n1
	int result = 0;
	if (n1 > n2 && n2 > n3) {
		result = n1;
	}
	else if (n1 > n3 && n3 > n2) {
		result= n1;
	}
	else if (n2 > n1 && n1 > n3) {
		result = n2;
	}
	else if (n2 > n3 && n3 > n2) {
		result = n2;
	}
	else if (n3 > n1 && n1 > n2) {
		result = n3;
	}
	else if (n3 > n2 && n2 > n1) {
		result = n3;
	}
	return result;
}

int min(int n1, int n2, int n3)
{
	//n1>n2>n3
	//n1>n3>n2
	//n2>n1>n3
	//n2>n3>n1
	//n3>n1>n2
	//n3>n2>n1
	int result = 0;
	if (n1 < n2 && n2 < n3) {
		result = n1;
	}
	else if (n1 < n3 && n3 < n2) {
		result = n1;
	}
	else if (n2 < n1 && n1 < n3) {
		result = n2;
	}
	else if (n2 < n3 && n3 < n1) {
		result = n2;
	}
	else if (n3 < n1 && n1 < n2) {
		result = n3;
	}
	else if (n3 < n2 && n2 < n1) {
		result = n3;
	}
	return result;
}


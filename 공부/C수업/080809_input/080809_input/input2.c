#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2, num3;
	int results;

	printf("�� ���� ���� �Է�: ");
	scanf("%d %d %d", &num1, &num2, &num3); //scanf �� �� ���� ����
	
	results = num1 + num2 + num3;
	printf("%d+%d+%d=%d \n", num1, num2, num3, results);

	//���� �߸� �Ȱ���?

	float n1, n2, n3;
	float result;     //���� ����

	printf("�� ���� �Ǽ� �Է�: ");
	scanf("%f %f %f ", &n1, &n2, &n3);

	result = n1 + n2 + n3;
	printf("%.1f + %.1f + %.1f = %.1f \n", n1, n2, n3, result);
}




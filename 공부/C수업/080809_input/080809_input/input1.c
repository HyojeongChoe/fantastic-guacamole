#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int result;
	int num1, num2;

	printf("���� one: ");    
	
	//�ֽ� ���־�Ʃ��������� scanf�� ���Ұ�.
	//scanf_s ��� �Լ��� ��ü�Ǿ���
	//������ c��� ǥ���Լ��� scanf�� ����
	
	scanf_s("%d", &num1);   //ù��° �����Է�
	printf("���� two: ");
	scanf_s("%d", &num2);    //�ι�° �����Է�

	result = num1 + num2;
	printf("%d + %d = %d \n", num1, num2, result);

	int n1, n2, results;

	printf("1) ");
	scanf_s("%d", &n1);   //ù��° �����Է�
	printf("2) ");
	scanf_s("%d", &n2);   //�ι�° �����Է�

	results = n1 + n2;

	printf("����: %d + %d = %d \n", n1, n2, results);




}

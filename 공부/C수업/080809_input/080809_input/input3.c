#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//����, ����, ����, ���� ������ ���� ����
	//����, ����, ����, ���� ���� �Է¹ޱ�
	//��� ������ ��հ��� ������ ������ ������ ����
	//��հ��� ������ ���

	int avg;
	int sum;
	int kor, eng, math, sci;

	printf("����: ");
	scanf("%d", &kor);    //���� ���� �Է�
	printf("����: ");
	scanf("%d", &eng);    //���� ���� �Է�
	printf("����: ");
	scanf("%d", &math);   //���� ���� �Է�
	printf("����: ");
	scanf("%d", &sci);    //���� ���� �Է�

	sum = kor + eng + math + sci;
	avg = sum / 4;
	printf("����:%d ���:%d \n", sum, avg);
	printf("\n");


	//ȭ�� �µ��� �����ϴ� ������ ���� ����(����)
	//ȭ�� �µ� �Է¹ޱ�
	//���� �µ��� �����ϴ� �Ǽ��� ���� ����
	//ȭ�� �µ��� �����µ��� ��ȯ C=(F-32)/1.8
	//C ���

	int f;
	float c;

	printf("��: ");
	scanf("%d", &f);
	
	c = (f - 32) / 1.8;   //ȭ���� ������ ��ȯ

	printf("%.1f�� \n", c);
	printf("\n");

	// 

	const float PI = 3.14;  //����� ���� (�빮�ڷ� ǥ��)
	float r, s;

	printf("������: ");
	scanf("%f", &r);

	s = r * r * PI;

	printf("������: %.1f�� \n", s);



	

}


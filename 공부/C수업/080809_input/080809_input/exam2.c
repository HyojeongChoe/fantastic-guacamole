#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int money;                   //��ȯ�� �� ���� ����
	int c500, c100, c50, c10;    //�� ������ ���� ����

	printf("------------------------------------------ \n");
	printf("\n");
	printf("���� ��ȯ�� ���α׷� 1.0 \n");
	printf("\n");
	printf("------------------------------------------ \n");
	printf("\n");
	printf("��ȯ�� ���� �Է��ϼ���. \n");
	printf("\n");
	scanf("%d", &money);                //�Է�
	printf("\n");

	printf("��ȯ��.........");
	printf("\n");
	printf("\n");

	//������ ���ϴ� �۾�
	//int nmg= moeny%500	->���ο� ���� ��� ����

	int nmg;				//������ ���� ����

	c500 = money / 500;		//500���� ���� ���ϱ�
	nmg = money % 500;		//500���� ������    
	c100 = nmg / 100;		
	nmg = nmg % 100;
	c50 = nmg / 50;
	nmg = nmg % 50;
	c10 = nmg / 10;			
	nmg = nmg % 10;

	
	printf("�����	����: %d��\n", c500);
	printf("��  ��	����: %d��\n", c100);
	printf("���ʿ�	����: %d��\n", c50);
	printf("��  ��	����: %d��\n", c10);
	printf("\n");
	printf("�ٲ��� ���� �ܵ�: %d��\n", nmg);


	//������ ���� �̿��Ǽ� �ϳ��� ������ ����ص� ����!!

	//c500 = money / 500;		//500�� ���� 
	//money = money % 500;	//500�� ������
	//c100 = money / 100;		//100�� ����
	//money = money % 100;	//100�� ������
	//c50 = money / 50;
	//money = money % 50;
	//c10 = money / 10;
	//money = money % 10;






}


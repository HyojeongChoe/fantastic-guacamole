#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void show_num(int n);

int main()
{
	//�Լ� ȣ��

	/*���� �ٷ� ����*/
	show_num(1);
	show_num(2);
	show_num(3);
	show_num(4);
	show_num(5);
;
	/*���� �� ����*/
	int n1 = 1;
	show_num(n1);
	int n2 = 2;
	show_num(n2); 
	int n3 = 3;
	show_num(n3);
	int n4 = 4;
	show_num(n4);
	int n5 = 5;
	show_num(n5);

	//���� ȿ������ ��� 
	for (int i = 1; i <= 5; i++)
	{
		show_num(i);
	}


}

//1~10���� ���������� �Ű������� �����ϸ� 
//����ϴ� �Լ�
//Show_num()

//�Լ� ����
void show_num(int n)		//���Ͼ� �̸��� ������ ���� �Լ��ȿ� ������ ����.
{
	printf("���ڸ� ����ϼ���: %d \n", n);
}
#include <stdio.h>
//4. ��ȯ�� (int,char) o, �Ű�����(��������) o
int add(int n1, int n2);
int sub(int n1, int n2);

int main()
{
	//���ϰ��� ������Ÿ�� �Լ���(�Ű�����,....)
	int n1 = 200;	//��������
	int n2 = 50;
	
	int a = add(n1, n2);	// == int a = add(200,50)		//ȣ���� ���� int ���� x
	printf("add��ȯ ��: %d\n", a);
	
	int b = sub(n1, n2);	// == int b = sub(200,50)		
	printf("sub��ȯ �� : %d\n", b);
	printf("sub2��ȯ �� : %d\n", sub(n1,n2));

	int result = sub(n1, n2);
	printf("sub3��ȯ �� : %d\n", result);
}

	//add()�Լ� ȣ���ؼ� ���ϰ��� main���� ���
	//sub()�Լ� ȣ���ؼ� ���ϰ��� main���� ���

int add(int n1, int n2)		//�󲮵��� -> ȣ������ �� ���� ä����
{
	return n1 + n2;
}

int sub(int n1, int n2)
{
	int result = n1 - n2;
	return n1 - n2;
}


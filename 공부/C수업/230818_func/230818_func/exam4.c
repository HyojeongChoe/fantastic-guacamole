#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cal(int n1, int n2, char c);
int main()
{
	int n1, n2;
	char c;

	printf("���� �ΰ��� �Է��ϼ���. \n");
	printf("�Է�: ");
	scanf("%d", &n1);
	printf("�Է�: ");
	scanf("%d", &n2);
	printf("��Ģ�����ڸ� �Է��ϼ���.(+,-,*,/) \n");
	scanf(" %c", &c);

	int result = cal(n1, n2, c);
	printf("%d %c %d = %d \n",n1,c,n2, result);				//������� ���� �ֱ�
	printf("%d %c %d = %d \n", n1, c, n2, cal(n1, n2, c));	//������� �Լ� �ֱ�

}

//���� 2���� ��Ģ�����ڸ� main()�Լ����� �Է¹���
//��Ģ�����ڴ� ���ڷ� �Է¹���(+,-,*,/)
//3���� ������ �Ű������� ����
//��������� return�Ͽ� �����Լ����� ���
//���� �Է� �� ���� �Է½ÿ��� " %c" ���

//int cal(int n1, int n2, char c)
//{
//	switch (c)
//	{
//	case '+': return n1 + n2;		//return�� �߰��� ���ٸ� break���� ���� �ʿ䰡 x
//	case '-': return n1 - n2;		//n1+n2���� �����ϸ鼭 cal�Լ� ����
//	case '*': return n1 * n2;
//	case '/': return n1 / n2;
//	}
//}

int cal(int n1, int n2, char c)
{
	int result = 0;
	switch (c)
	{
	case '+': result = n1 + n2; break;
	case '-': result = n1 - n2; break;
	case '*': result = n1 * n2; break;
	case '/': result = n1 / n2; break;
	}
	
	return result;			//return�ٿ����� �������� ������
}

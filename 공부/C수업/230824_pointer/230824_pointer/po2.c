#include <stdio.h>

int main()
{
	int num1 = 100, num2 = 100, num3 = 100;
	int* pnum = NULL;	//�����ͺ��� �ʱ�ȭ

	pnum = &num1;	//������ pnum�� num1�� ����Ŵ
	*pnum += 30;	//num1+=30;�� ����	=>*�� ������ pnum�� ����Ű�� �ּ��� ���� ��, ���� 100�� +30

	pnum = &num2;	//������ pnum�� mum2�� ����Ŵ
	*pnum -= 30;

	pnum = &num3;	//(*pnum)=(*pnum)-30
	*pnum += 20;

	printf("num1:%d, num2:%d, num3:%d\n", num1, num2, num3);	//*pnum = num1�� �ᱹ ����
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int cur = 2, is;
	
	while (cur < 10)	//1�ܺ��� 9�ܱ��� �ݺ�
	{
		is = 1;			//���ο� ���� ������ ���ؼ�
		while (is < 10)	// �� ���� 1���� 9������ ���� ǥ��
		{
			printf("%d x %d = %d \n", cur, is, cur * is);
			is++;
		}
		cur++;			//���� ������ �Ѿ�� ���ؼ�
		printf("\n");
	}
}
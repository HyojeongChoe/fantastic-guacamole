#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//if (dmz[0] == '*') {
	//	printf("��������\n");
	//}
	//if (dmz[1] == 'B') {
	//	printf("����\n");
	// 
	// 
	//1���� �迭 dmz�� ���ڰ� �Ʒ�ó�� �ż��Ǿ���
	// * B * B *		����, �ڱ��ڽ�, ������ �˻�
	// 1 1 2 1 1
	char dmz[] = { 'B', 'B', '*', 'B', '*' };

	int arr[5] = { 0 };
	const int START = 0;		//�������(������ ���� ����X)
	//#define  END 4			//END�� 4�� ����
	const int END = 4;			
	//���� ����
	for (int i = 0; i < 5; i++)
	{
		if (dmz[i] == 'B') {
			arr[i] += 1;
		}
		if (dmz[i - 1] == 'B' && i!=START ) {
			arr[i] += 1;
		}
		if (dmz[i + 1] == 'B' && i!=END ) {
			arr[i] += 1;
		}
		
	}
	//���� ���
	for (int i = 0; i < 5; i++) {
		printf("%d \t", arr[i]);
	}

	int n, result;
	n = 1;
	result = !n;
	
	printf("�����: %d", result);
}


	
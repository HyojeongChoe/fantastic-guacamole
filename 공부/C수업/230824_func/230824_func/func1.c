#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lotto(int a[]);
int main()
{
	//1. �ζ� ����(�ߺ�����)-�迭������ �н� ����
	//2. �Լ��� ó��- �Լ��н�

	//�ζ� ��ȣ�� ������ �迭 ����
	int lotto[6] = { 0 };	//�ζǸ� ������ �迭
	srand(time(NULL));		
	int num = 0;			//�迭�� ���� ���� ����

	for (int i = 0; i < 6; i++) {
		num = (rand() % 45) + 1;
		lotto[i] = num;		//�迭�� �������
		for (int j = 0; j < i; j++) {
			//�迭�� �ִ� ���ڿ� ���� ȹ���� ���� ��
			if (lotto[i] == lotto[j]) {
				i--;	
				break;
			}
		}printf("%d\t", lotto[i]);	//�ߺ��Ǽ� ����
	}
	printf("\n");
	for (int i = 0; i < 6; i++) {
		printf("%d\t", lotto[i]);
	}
}

//void lotto(int a[])
//{
//	for (int i = 0; i < 6; i++) {
//		a[i]=
//	}
//}
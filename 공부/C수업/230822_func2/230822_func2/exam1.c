#include <stdio.h>
#include <stdlib.h> //rand(),srand() ���� ���̺귯��
#include <time.h>	//time() ���̺귯��

void show_arr(int a[]);
int main()
{
	// 1. main()���� 10���� ���ڸ� �����ϴ� 1�����迭 ����
	// 2. �����ϰ� 10���� ���ڸ� �迭�� ����
	// 3. �迭�� �ּҰ��� �Ű������� �����Ͽ� Ȧ, ¦�� �����Ͽ� ����ϴ� �Լ�

	srand(time(NULL));	//�Ź� �ٸ� �õ� ����
	

	int random = 0;		//������ ������ random�̶�� ���� ���� �� �ʱ�ȭ
	int arr[10] = { 0 };
	
	for (int i = 0; i < 10; i++) {
		random = (rand() % 45)+1;	//���� ���� 1~45
		arr[i] = random;
		/*printf("arr[%d]=%d\n", i,random);*/
	}
	show_arr(arr);
}

void show_arr(int a[])
{
	for (int i = 0; i < 10; i++) {
		if (a[i] % 2 == 0) {
			printf("arr[%d]=%d\t(¦)\n", i, a[i]);
		}
		else {
			printf("arr[%d]=%d\t(Ȧ)\n", i, a[i]);
		}
	}
}
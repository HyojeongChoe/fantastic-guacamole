#include <stdio.h>
int main()
{
	//1���� �迭
	int arr[5] = { 10, 20, 30, 40, 50 }; //�迭 ����� ���ÿ� �ʱ�ȭ
	int sum = 0;
	
	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;	//������ �� �ִ� ��� 

	for (int i = 0; i < 5; i++) {
		/*arr[i] = (i + 1) * 10;*/	//--> ��Ģ���� ��쿡. ��밡��.
		printf("arr[%d]:%d\n", i, arr[i]);
		sum += arr[i];
	}
	printf("�迭��ҿ� ����� ���� ��: %d \n", sum);
}
#include <stdio.h>

void show_arr_comm(int a[2][3]);

int main()
{
	int arr1[2][3] = {
		{1,2,3},
		{4,5,6}
	};
	show_arr_comm(arr1);	//arr1ȣ��. ȣ���� �� ������ȣ��.

	int arr2[2][3] = {
		{10},
		{20,30},
	};
	show_arr_comm(arr2);	//arr2ȣ��

	int arr3[2][3] = { 100,200,300,400 };
	show_arr_comm(arr3);	//arr3 �Ű����� ���� int a[][]��.
	 
}



void show_arr_comm(int a[][3])	//�� ���� ������ �Ǹ� �ȵ�. �ּ��� �� ��� .���� ��������
{
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", a[i][j]);
		}printf("\n");
	}printf("\n");
}